#pragma once

#include <macros.h>
#include <enums/layer.h>

enum class AnimationEndHandling
{
    Freeze,
    DeactivateOnEnd,
    DestroyOnEnd,
    Loop
};

INJECT_C_DLLEXPORT bool sprite_preload(const char* path);
INJECT_C_DLLEXPORT int sprite_load(const char* path, float x, float y, float z, float sx, float sy, float sz, float angle);
INJECT_C_DLLEXPORT int sprite_create(float x, float y, float z, float rotation, float scale_x, float scale_y, Layer layer, AnimationEndHandling end_handler);
INJECT_C_DLLEXPORT void sprite_set_color_modulate(int id, float r, float g, float b, float a);
INJECT_C_DLLEXPORT void sprite_animation_entry(int id, float x, float y, float z, float scale_x, float scale_y, float rotation, float duration, const wchar_t* texture);
INJECT_C_DLLEXPORT void sprite_set_animation_entry(int id, int entry);
INJECT_C_DLLEXPORT void sprite_set_position(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void sprite_set_scale(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void sprite_set_rotation(int id, float angle);
INJECT_C_DLLEXPORT void sprite_set_active(int id, bool value);
INJECT_C_DLLEXPORT void sprite_destroy(int id);
INJECT_C_DLLEXPORT void clear_sprites();
