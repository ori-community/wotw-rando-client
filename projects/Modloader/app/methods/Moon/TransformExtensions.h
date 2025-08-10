#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::TransformExtensions {
    IL2CPP_REGISTER_METHOD(0x031B5CF0, app::String*, fullName_1, app::Transform* _this)
    IL2CPP_REGISTER_METHOD(0x031B5FB0, app::String*, fullNameWithScene, app::Transform* _this)
    IL2CPP_REGISTER_METHOD(0x031B63C0, app::String*, fullName_2, app::GameObject* _this)
    IL2CPP_REGISTER_METHOD(0x031B64B0, app::String*, fullName_3, app::Component_1* _this)
    IL2CPP_REGISTER_METHOD(0x031B65B0, void, cctor, )
} // namespace app::classes::Moon::TransformExtensions
