#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritLeashEffectPoseAnimator {
    IL2CPP_REGISTER_METHOD(0x00D5C840, void, Awake, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5C850, void, Init, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5C9B0, void, OnPoolDespawned, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5CA70, void, EnsurePositionsArray, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5CB10, app::Vector3, get_TargetPosition, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5CC90, app::Transform *, get_HandTransform, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5CDA0, void, CustomUpdate, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5CF20, void, FixedUpdate, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5D0A0, void, OnDrawGizmos, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5D160, void, UpdateLeashEffect, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5E1D0, void, UpdateTargetCircleEffect, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5E520, void, UpdateLightPosition, (app::SpiritLeashEffectPoseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5E7B0, void, SetTarget_1, (app::SpiritLeashEffectPoseAnimator * this_ptr, app::SeinCharacter * sein, app::IAttackable * target, app::Vector3 relative_position, float effect_duration))
    IL2CPP_REGISTER_METHOD(0x00D5E920, void, SetTarget_2, (app::SpiritLeashEffectPoseAnimator * this_ptr, app::SeinCharacter * sein, app::Transform * target, app::Vector3 relative_position, float effect_duration))
    IL2CPP_REGISTER_METHOD(0x00D5EA90, void, ctor, (app::SpiritLeashEffectPoseAnimator * this_ptr))
}
