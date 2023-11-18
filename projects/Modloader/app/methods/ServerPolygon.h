#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerPolygon.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ServerPolygon {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerPolygon * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059D6D0, app::Object*, CreateData, (app::ServerPolygon * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059D960, app::Component_1*, ApplyData, (app::ServerPolygon * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerPolygon
