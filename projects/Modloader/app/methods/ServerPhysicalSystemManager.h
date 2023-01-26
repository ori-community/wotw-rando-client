#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerPhysicalSystemManager.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ServerPhysicalSystemManager {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerPhysicalSystemManager * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00AC35F0, app::Object*, CreateData, (app::ServerPhysicalSystemManager * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00AC3F40, app::Component_1*, ApplyData, (app::ServerPhysicalSystemManager * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00AC4100, app::MoonGuid*, GetGuid, (app::ServerPhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC41D0, void, RebuildReferences, (app::ServerPhysicalSystemManager * this_ptr))
} // namespace app::classes::ServerPhysicalSystemManager
