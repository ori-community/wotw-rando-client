#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraShakeAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::CameraShakeAnimator {
    IL2CPP_REGISTER_METHOD(0x010C8C60, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_ExternalStrenghtMultiplier, app::CameraShakeAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_ExternalSpeedMultiplier, app::CameraShakeAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x010C8D40, float, get_ModifiedStrength, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C92B0, app::Vector3, get_CurrentOffset, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9480, app::Vector3, get_CurrentRotation, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_ProcessShakeInEditor, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_ProcessShakeInEditor, app::CameraShakeAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x010C9650, app::Transform*, get_EffectiveShakeLocation, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9720, float, get_EffectiveDuration, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9820, float, get_EffectiveSpeed, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC93D0, void, OnPoolSpawned, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9830, void, OnDestroy, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9920, void, OnStartPlayback, app::CameraShakeAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010C9AA0, void, OnUpdateEntity, app::CameraShakeAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x010C9AD0, void, SetCurrentShakeTime, app::CameraShakeAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x010C9AF0, void, OnEnable, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9C20, void, OnDisable, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C9D00, void, OnValidate, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x010C9DD0,
        void,
        SynchronizeData,
        app::CameraShakeAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record
    )
    IL2CPP_REGISTER_METHOD(0x010C9F40, bool, ApproximateEvent, app::CameraShakeAnimator* this_ptr, int32_t evt, float* time)
    IL2CPP_REGISTER_METHOD(0x010CA020, void, ctor, app::CameraShakeAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CA120, void, cctor, )
} // namespace app::classes::Moon::Timeline::CameraShakeAnimator
