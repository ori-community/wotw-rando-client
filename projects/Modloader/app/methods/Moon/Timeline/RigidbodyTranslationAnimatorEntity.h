#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::RigidbodyTranslationAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateCategory__Enum, get_UpdateCategory, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00780E20, app::GameObject*, get_ExternalTarget, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00780ED0, void, OnStartPlayback, (app::RigidbodyTranslationAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00780FC0, app::Rigidbody*, get_EffectiveBody, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00781060, void, SetupInitialValues, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007811E0, void, OnUpdateEntity, (app::RigidbodyTranslationAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00781210, void, OnStartTimelineSample, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00781240, void, OnTimelineSample, (app::RigidbodyTranslationAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00781340, float, GetAnimationCurveDuration, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007813F0, app::Vector3, GetPosition, (app::RigidbodyTranslationAnimatorEntity * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00781670, app::Vector3, EffectiveTranslation, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007816C0, void, OnDrawGizmos, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00781970, void, ctor, (app::RigidbodyTranslationAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::RigidbodyTranslationAnimatorEntity
