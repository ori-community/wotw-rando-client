#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TransformUtility {
    IL2CPP_REGISTER_METHOD(0x00B09D70, void, SetParentMaintainingLocalTransform, (app::Transform * transform, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x00B09FC0, void, SetParentMaintainingLocalPosition, (app::Transform * transform, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x00B0A0B0, void, SetParentMaintainingLocalPositionAndRotation, (app::Transform * transform, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x00B0A250, void, SetParentMaintainingRotationAndScale, (app::Transform * transform, app::Transform* parent))
} // namespace app::classes::TransformUtility
