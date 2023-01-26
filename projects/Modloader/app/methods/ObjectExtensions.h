#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x0060E640, bool, Owns_1, (app::Object_1 * owner, app::Component_1* item))
    IL2CPP_REGISTER_METHOD(0x0060E7B0, bool, Owns_2, (app::Object_1 * owner, app::GameObject* item))
} // namespace app::classes::ObjectExtensions
