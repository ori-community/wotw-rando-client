#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPhysicsCollisionReceiver.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x015855E0, app::Object__Array*, GetInterfaces, (app::GameObject * g_obj))
    IL2CPP_REGISTER_METHOD(0x015E9920, app::Object*, GetInterface_1, (app::GameObject * g_obj))
    IL2CPP_REGISTER_METHOD(0x015E9A40, app::Object*, GetInterfaceInChildren, (app::GameObject * g_obj))
    IL2CPP_REGISTER_METHOD(0x01585B80, app::Object__Array*, GetInterfacesInChildren, (app::GameObject * g_obj))
    IL2CPP_REGISTER_METHOD(0x015E9920, app::IPhysicsCollisionReceiver*, GetInterface_2, (app::GameObject * g_obj))
} // namespace app::classes::GameObjectExtensions
