#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerGoThroughPlatform.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ServerGoThroughPlatform {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerGoThroughPlatform * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, CreateData, (app::ServerGoThroughPlatform * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABF080, app::Component_1*, ApplyData, (app::ServerGoThroughPlatform * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerGoThroughPlatform
