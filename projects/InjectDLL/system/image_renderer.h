#pragma once

#include <macros.h>
#include <enums/layer.h>

enum class SpriteEndHandling
{
    Freeze,
    Hide
};

enum class AnimationEndHandling
{
    Freeze,
    DeactivateOnEnd,
    DestroyOnEnd,
    Loop
};

enum class AnimState
{
    Disabled,
    Active,
    ActiveButFrozen
};

INJECT_C_DLLEXPORT bool anim_preload(const char* path);
INJECT_C_DLLEXPORT int anim_load(const char* path, float x, float y, float z, float sx, float sy, float sz, float angle);
INJECT_C_DLLEXPORT void anim_set_color_modulate(int id, float r, float g, float b, float a);
INJECT_C_DLLEXPORT void anim_set_time(int id, float time);
INJECT_C_DLLEXPORT void anim_set_position(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void anim_set_scale(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void anim_set_rotation(int id, float angle);
INJECT_C_DLLEXPORT void anim_set_state(int id, AnimState state);
INJECT_C_DLLEXPORT bool anim_check_state(int id, AnimState state);
INJECT_C_DLLEXPORT void anim_destroy(int id);
INJECT_C_DLLEXPORT void clear_animations();
