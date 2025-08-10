#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SeinController3D_EventId_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/OriHeadIk.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SeinController3D {
    IL2CPP_REGISTER_METHOD(0x006DF9E0, void, add_OnAnimationEventCallback, app::SeinController3D* this_ptr, app::Action_1_SeinController3D_EventId_* value)
    IL2CPP_REGISTER_METHOD(0x006DFAD0, void, remove_OnAnimationEventCallback, app::SeinController3D* this_ptr, app::Action_1_SeinController3D_EventId_* value)
    IL2CPP_REGISTER_METHOD(0x006DFBC0, void, add_OnStringAnimationEventCallback, app::SeinController3D* this_ptr, app::Action_1_String_* value)
    IL2CPP_REGISTER_METHOD(0x006DFCB0, void, remove_OnStringAnimationEventCallback, app::SeinController3D* this_ptr, app::Action_1_String_* value)
    IL2CPP_REGISTER_METHOD(0x006DFDA0, app::Renderer*, get_Renderer, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DFF40, app::Renderer*, get_AlphaBlendedRenderer, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E00E0, float, get_CurrentRootAngle, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E00F0, app::PerspectiveRotationAdjustment*, get_PerspectiveAdjustment, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E01C0, float, get_MirrorHolderAngle, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E0260, void, set_MirrorHolderAngle, app::SeinController3D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006D64E0, app::OriHeadIk*, get_OriHeadIk, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E03A0, void, set_OriHeadIk, app::SeinController3D* this_ptr, app::OriHeadIk* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::GameObject*, get_OpaqueObject, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::GameObject*, get_AlphaBlendObject, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E03B0, void, Awake, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, SetPuppet, app::SeinController3D* this_ptr, app::IPuppet* puppet)
    IL2CPP_REGISTER_METHOD(0x006E0650, void, Start, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E0710, bool, get_MirrorHolderOverrided, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E0D30, void, FixedUpdate, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E0E40, void, Update, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E1580, void, ResetMirrorHolderRotationOverTime, app::SeinController3D* this_ptr, float original_rotation, float time)
    IL2CPP_REGISTER_METHOD(0x006E15A0, void, ResetMirrorHolderRotation, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E15C0, void, SetDirection, app::SeinController3D* this_ptr, bool face_left)
    IL2CPP_REGISTER_METHOD(0x006E15E0, void, Show, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E16E0, void, Hide, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourEnter,
        app::SeinController3D* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourUpdate,
        app::SeinController3D* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourExit,
        app::SeinController3D* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(0x006E17E0, void, OnAnimationEvent_1, app::SeinController3D* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x006E1880, void, OnAnimationEvent_2, app::SeinController3D* this_ptr, app::String* event_id)
    IL2CPP_REGISTER_METHOD(0x006E1920, void, ApplyEmissivitySettings, app::SeinController3D* this_ptr, app::EmissiveIndividualSettings settings)
    IL2CPP_REGISTER_METHOD(0x006E1DA0, void, ApplySettings, app::SeinController3D* this_ptr, app::PlayerSettingsPerScene* settings)
    IL2CPP_REGISTER_METHOD(0x006E1F50, void, ctor, app::SeinController3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::SeinController3D
