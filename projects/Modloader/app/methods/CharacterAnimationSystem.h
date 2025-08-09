#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CharacterAnimationSystem {
    IL2CPP_REGISTER_METHOD(0x010475F0, void, RemoveState, app::CharacterAnimationSystem* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x010476E0, int32_t, RemoveLowerLayersAndFindIndex, app::CharacterAnimationSystem* this_ptr, int32_t layer)
    IL2CPP_REGISTER_METHOD(
        0x010477E0,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        Play_1,
        app::CharacterAnimationSystem* this_ptr,
        app::TextureAnimationWithTransitions* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x010479A0,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        Play_2,
        app::CharacterAnimationSystem* this_ptr,
        app::String* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x01047B40,
        app::ActiveAnimationHandle,
        Play_3,
        app::CharacterAnimationSystem* this_ptr,
        app::MoonAnimation* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x01047C90,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        RestartLoop_1,
        app::CharacterAnimationSystem* this_ptr,
        app::TextureAnimationWithTransitions* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x01047E50,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        RestartLoop_2,
        app::CharacterAnimationSystem* this_ptr,
        app::String* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x01047FF0,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        PlayLoop_1,
        app::CharacterAnimationSystem* this_ptr,
        app::TextureAnimationWithTransitions* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition,
        bool keep_frame
    )
    IL2CPP_REGISTER_METHOD(
        0x01048290,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        PlayLoop_2,
        app::CharacterAnimationSystem* this_ptr,
        app::String* animation_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition,
        bool keep_frame
    )
    IL2CPP_REGISTER_METHOD(
        0x01048510,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        PlayRandom,
        app::CharacterAnimationSystem* this_ptr,
        app::TextureAnimationWithTransitions__Array* animations_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x01048600,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        PlayLoopRandom,
        app::CharacterAnimationSystem* this_ptr,
        app::TextureAnimationWithTransitions__Array* animations_to_play,
        int32_t layer,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(0x010486F0, void, Start, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01048700, void, UpdateStates, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01048D40, void, FixedUpdate, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01048F50, void, Awake, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01049220, void, OnDestroy, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010494F0, void, OnAnimationEnd_1, app::CharacterAnimationSystem* this_ptr, app::TextureAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x01049660, void, OnAnimationEnd_2, app::CharacterAnimationSystem* this_ptr, app::String* animation_name)
    IL2CPP_REGISTER_METHOD(0x01049770, void, EnableRootMotion, app::CharacterAnimationSystem* this_ptr, bool disable_stick_to_platforms)
    IL2CPP_REGISTER_METHOD(0x010498B0, void, DisableRootMotion, app::CharacterAnimationSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010499F0, void, OnProcessRootMotion, app::CharacterAnimationSystem* this_ptr, app::Vector3 root_velocity)
    IL2CPP_REGISTER_METHOD(0x01049CE0, void, ctor, app::CharacterAnimationSystem* this_ptr)
} // namespace app::classes::CharacterAnimationSystem
