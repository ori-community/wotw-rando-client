#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerLimitedLifetime.h>

namespace app::classes::ServerLimitedLifetime {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, app::ServerLimitedLifetime* this_ptr, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x00ABF6F0, app::Object*, CreateData, app::ServerLimitedLifetime* this_ptr, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x00ABF780, app::Component_1*, ApplyData, app::ServerLimitedLifetime* this_ptr, app::GameObject** gameobj)
} // namespace app::classes::ServerLimitedLifetime
