#pragma once

#include <macros.h>
#include <enums/layer.h>
#include <randomizer/dirty_value.h>
#include <randomizer/render/sprite.h>

namespace randomizer
{
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

    struct Animation
    {
        bool alive = true;
        AnimState state = AnimState::Disabled;
        DirtyValue<app::Vector3> position = app::Vector3{ 0.f, 0.f, 0.f };
        DirtyValue<app::Vector3> scale = app::Vector3{ 1.f, 1.f, 1.f };
        DirtyValue<float> rotation = 0;
        DirtyValue<app::Color> color_modulate = app::Color{ 1.f, 1.f, 1.f, 1.f };
        AnimationEndHandling end_handler = AnimationEndHandling::Freeze;
        float time = 0;
        float duration = 0;

        bool sprites_exist = false;
        std::vector<Sprite> sprites;
    };
}

// TODO: Refactor all of this when we get rid of csharp.

INJECT_C_DLLEXPORT bool anim_preload(const char* path);
INJECT_C_DLLEXPORT int anim_load(const char* path, float x, float y, float z, float sx, float sy, float sz, float angle);
INJECT_C_DLLEXPORT void anim_set_color_modulate(int id, float r, float g, float b, float a);
INJECT_C_DLLEXPORT void anim_set_time(int id, float time);
INJECT_C_DLLEXPORT void anim_set_position(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void anim_set_scale(int id, float x, float y, float z);
INJECT_C_DLLEXPORT void anim_set_rotation(int id, float angle);
INJECT_C_DLLEXPORT void anim_set_state(int id, randomizer::AnimState state);
INJECT_C_DLLEXPORT bool anim_check_state(int id, randomizer::AnimState state);
INJECT_C_DLLEXPORT void anim_destroy(int id);
INJECT_C_DLLEXPORT void clear_animations();
