#pragma once

#include <macros.h>

enum class AnimationEndHandling
{
    Freeze,
    DeactivateOnEnd,
    DestroyOnEnd,
    Loop
};

enum class Layer : int32_t
{
    UI = 8,
    Sein = 9,
    Solids = 10,
    Art = 11,
    Character = 12,
    CharacterMovement = 13,
    WorldMap = 14,
    Items = 15,
    KillCharacter = 16,
    KillEverything = 17,
    PushPullBlock = 18,
    Platform = 19,
    ResampleBuffer = 20,
    CharacterMovementIgnorePlatforms = 21,
    ArtReflected = 22,
    Debris = 23,
    DebrisNoCollsion = 24,
    ArtBlurred = 25,
    Projectile = 26,
    EarlyZ = 27,
    ArtBlurredReflected = 28,
    Laser = 30,
    TerrainCollisionIgnorePlayerAndEnemies = 31
};

INJECT_C_DLLEXPORT bool sprite_preload(const char* path);
INJECT_C_DLLEXPORT int sprite_load(const char* path, float x, float y, float z, float sx, float sy, float sz, float angle);
INJECT_C_DLLEXPORT int sprite_create(float x, float y, float z, float rotation, float scale_x, float scale_y, Layer layer, AnimationEndHandling end_handler);
INJECT_C_DLLEXPORT void sprite_animation_entry(int id, float x, float y, float z, float scale_x, float scale_y, float rotation, float duration, const wchar_t* texture);
INJECT_C_DLLEXPORT void sprite_set_animation_entry(int id, int entry);
INJECT_C_DLLEXPORT void sprite_set_position(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void sprite_set_scale(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void sprite_set_rotation(int id, float angle);
INJECT_C_DLLEXPORT void sprite_set_active(int id, bool value);
INJECT_C_DLLEXPORT void sprite_destroy(int id);
INJECT_C_DLLEXPORT void clear_sprites();
