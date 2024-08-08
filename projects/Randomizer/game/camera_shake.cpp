#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/Moon/Timeline/CameraShakeAnimator.h>
#include <Modloader/app/methods/CameraShake.h>
#include <Core/settings.h>
#include <Modloader/il2cpp_math.h>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(Moon::Timeline::CameraShakeAnimator, float, get_ModifiedStrength, (app::CameraShakeAnimator* this_ptr)) {
        return next::Moon::Timeline::CameraShakeAnimator::get_ModifiedStrength(this_ptr) * core::settings::camera_shake_intensity();
    }

    IL2CPP_INTERCEPT(Moon::Timeline::CameraShakeAnimator, float, get_EffectiveSpeed, (app::CameraShakeAnimator* this_ptr)) {
        return next::Moon::Timeline::CameraShakeAnimator::get_EffectiveSpeed(this_ptr) / std::max(core::settings::camera_shake_intensity(), FLT_MIN);
    }

    IL2CPP_INTERCEPT(CameraShake, app::Vector3, get_CurrentOffset, (app::CameraShake* this_ptr)) {
        return next::CameraShake::get_CurrentOffset(this_ptr) * core::settings::camera_shake_intensity();
    }

    IL2CPP_INTERCEPT(CameraShake, app::Vector3, get_CurrentRotation, (app::CameraShake* this_ptr)) {
        return next::CameraShake::get_CurrentRotation(this_ptr) * core::settings::camera_shake_intensity();
    }

    IL2CPP_INTERCEPT(CameraShake, float, get_Duration, (app::CameraShake* this_ptr)) {
        return next::CameraShake::get_Duration(this_ptr) * core::settings::camera_shake_intensity();
    }
}
