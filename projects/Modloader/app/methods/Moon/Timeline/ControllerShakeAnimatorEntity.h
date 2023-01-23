#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ControllerShakeAnimatorEntity.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::ControllerShakeAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00763150, void, OnPoolSpawned, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00763160, float, get_CurrentShake, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00763250, void, OnUpdateEntity, (app::ControllerShakeAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00763150, void, OnStopPlayback, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00763270, bool, get_ControllerShakeActive, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007632F0, float, get_ModifiedStrength, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00763830, void, OnEnable, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007638F0, void, OnDisable, (app::ControllerShakeAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007639D0, bool, ApproximateEvent, (app::ControllerShakeAnimatorEntity * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00763AE0, void, ctor, (app::ControllerShakeAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ControllerShakeAnimatorEntity
