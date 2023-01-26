#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerGenericComponent.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ServerGenericComponent {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerGenericComponent * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x00ABEDC0, app::Component_1*, ApplyData, (app::ServerGenericComponent * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00ABEF60, app::Object*, CreateData, (app::ServerGenericComponent * this_ptr, app::Object* data))
} // namespace app::classes::ServerGenericComponent
