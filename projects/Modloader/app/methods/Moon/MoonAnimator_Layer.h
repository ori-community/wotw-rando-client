#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimatorLayerDefinition.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/MoonAnimator_Layer.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::MoonAnimator_Layer {
    IL2CPP_REGISTER_METHOD(0x02117030, void, AssureActiveAnimationBufferInitialized, )
    IL2CPP_REGISTER_METHOD(0x02117340, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x021173E0, int32_t, get_ActiveAnimationBufferSize, )
    IL2CPP_REGISTER_METHOD(0x02117490, int32_t, get_ActiveAnimationAllocationCount, )
    IL2CPP_REGISTER_METHOD(0x02117530, void, set_ActiveAnimationAllocationCount, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x021175E0,
        app::MoonAnimator_ActiveAnimation*,
        AllocateActiveAnimation,
        app::MoonAnimator_Layer* this_ptr,
        app::IAnimation* animation,
        int32_t priority,
        app::MoonAnimator* animator
    )
    IL2CPP_REGISTER_METHOD(0x021179A0, void, DeallocateActiveAnimation, app::MoonAnimator_Layer* this_ptr, app::MoonAnimator_ActiveAnimation* active_animation)
    IL2CPP_REGISTER_METHOD(0x02117BF0, app::String*, get_Name, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02117C90, app::MoonAnimatorLayerDefinition, get_Definition, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02117CB0, float, get_Weight, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02117D60, bool, get_HasAnimationsPlaying, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MoonAnimator_AnimationInstance*, get_RootAnimationInstance, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02117DF0, void, ctor, app::MoonAnimator_Layer* this_ptr, app::MoonAnimator* animator, app::MoonAnimatorLayerDefinition definition)
    IL2CPP_REGISTER_METHOD(
        0x02118030,
        app::ActiveAnimationHandle,
        Play_1,
        app::MoonAnimator_Layer* this_ptr,
        app::IAnimation* animation,
        int32_t priority,
        app::Func_1_Boolean_* continue_condition,
        app::Action* on_stopped_playing
    )
    IL2CPP_REGISTER_METHOD(0x02118210, void, UpdateLayer, app::MoonAnimator_Layer* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x021182A0, app::ActiveAnimationHandle, GetActiveAnimation, app::MoonAnimator_Layer* this_ptr, app::IAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x021183D0, void, HandleCurrentAnimationState, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021184D0, app::Playable, GetRootPlayable, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021185B0, void, Clear, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02118750, void, UpdateActiveAnimations, app::MoonAnimator_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02118E60,
        app::IActiveAnimation*,
        FindAndRemoveActiveAnimation,
        app::MoonAnimator_Layer* this_ptr,
        app::IAnimation* animation,
        int32_t priority
    )
    IL2CPP_REGISTER_METHOD(0x02118FB0, void, Play_2, app::MoonAnimator_Layer* this_ptr, app::MoonAnimator_ActiveAnimation* new_active_animation)
    IL2CPP_REGISTER_METHOD(0x021191A0, void, RemoveAnimationAt, app::MoonAnimator_Layer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02119240, void, StartAnimation, app::MoonAnimator_Layer* this_ptr, app::MoonAnimator_ActiveAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x02119270, void, StopAnimation, app::MoonAnimator_Layer* this_ptr, app::MoonAnimator_ActiveAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x021192D0, void, cctor, )
} // namespace app::classes::Moon::MoonAnimator_Layer
