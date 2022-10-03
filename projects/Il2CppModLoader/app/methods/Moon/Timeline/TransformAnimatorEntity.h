#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::TransformAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00C03C70, app::UpdateCategory__Enum, get_UpdateCategory, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F540, void, Awake, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F6C0, void, PrepareBodyForMovement, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F930, void, StopBodyMovement, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8FA90, void, OnStartPlayback, (app::TransformAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E8FB50, void, OnStopPlayback, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8FD40, void, OnUpdateEntity, (app::TransformAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E8FE00, void, RefreshUpdateCategory, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::TransformAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8FF70, void, ctor, (app::TransformAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::TransformAnimatorEntity
