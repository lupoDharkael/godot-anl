# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/).

## [Unreleased][2.2] - 2020-XX-XX

- Nothing new yet.

## [2.1] - 2020-02-02

### Added

- Add reroute node:
    - conveniently rearranges existing connections between nodes.
- Add sequence node:
    - performs operations on a connected sequence of nodes (add, multiply etc).
    - acts like a selector node to quickly choose between noise nodes.
- Add `Make Component From Nodes` option to `Add Component` menu:
    - replaces existing nodes in-place by moving selected nodes into a new component.
- Ability to delete all selected nodes at once.

### Changed

- Disabled graph node headers custom styling to preserve compatibility with Godot 3.1.
- Right-clicking on the graph will show the `Add Component` popup instead of `Add Node`.
- `Add Node` menu redesigned and adapted to match `VisualShader` interface (thanks @Chaosus):
    - now its a dialog with a tree instead of a menu (broken down into categories).
    - easy drag-n-drop functionality.

### Fixed

- Disallow connecting ports of the same node to itself.

## [2.0] - 2019-03-13

### Added

- Introduce `VisualAccidentalNoise` editor plugin.
  - Expose and add most visual noise nodes according to `AccidentalNoise` class.
  - Add component visual noise nodes to create more complex noise from base ones.
  - Ability to save and load visual noise and components as resource.
- Expose normalmap and bumpmap noise mapping methods.
- Add noise formats: heightmap, normalmap, bumpmap, texture.
- Add methods to map noise to 3D image, including seamless (experimental, internal only).
- Add methods to generate seamless 2D/3D noise regardless of mapping mode.
- Add convenience methods to get noise via `Vector2`/`Vector3`.
- Define expression as property from which noise can be evaluated if set (unstable).
- Expose methods for programmable noise via variables.
- Document more methods and members.

### Changed

- Rename `AnlNoise` class to `AccidentalNoise` throughout the module.
- Make `AccidentalNoise` extend a `Resource` so that in can be saved on disk.
- Rewrite methods for retrieving noise and instruction indexes via `function` property from which the noise is evaluated.
- Rewrite noise image mapping and expose mapping mode and ranges as properties.
  - `map_to_image` is used internally, set noise parameters via exposed properties and use `get_image` instead.
- Mapping ranges changed to `AABB` instead of `Rect2` to include 3D noise mapping.
- Rewrite `ExpressionBuilder` to use *snake_case* style by default, *camelCase* can be toggled before build.

### Fixed

- Slightly optimize noise image mapping performance for RGBA8.


## Compare versions

[Unreleased] 2.2 https://github.com/Xrayez/godot-anl/compare/2.1-stable...HEAD

2.1 https://github.com/Xrayez/godot-anl/compare/2.0-stable...2.1-stable

2.0: https://github.com/Xrayez/godot-anl/compare/1.0-stable...2.0-stable

1.0: https://github.com/Xrayez/godot-anl/releases/tag/1.0-stable
