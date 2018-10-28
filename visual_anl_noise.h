#ifndef VISUAL_ANL_NOISE_H
#define VISUAL_ANL_NOISE_H

#include "anl_noise.h"

class VisualAnlNoise : public AnlNoise {
    GDCLASS(VisualAnlNoise, AnlNoise);
    OBJ_SAVE_TYPE(VisualAnlNoise);

protected:
    static void _bind_methods();

public:
    VisualAnlNoise();
};

#endif