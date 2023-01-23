#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ServerObject.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/ServerObjectReferences.h>

namespace app::classes::ServerObjectReferences {
    IL2CPP_REGISTER_METHOD(0x00AC06E0, void, AddReferenceToObject_1, (int32_t id, app::GameObject* obj, app::ServerObject* server_obj))
    IL2CPP_REGISTER_METHOD(0x00AC0820, void, AddReferenceToObject_2, (int32_t id, app::GameObject* obj))
    IL2CPP_REGISTER_METHOD(0x00AC0910, void, AddReferenceToComponent, (int32_t id, app::Object_1* component))
    IL2CPP_REGISTER_METHOD(0x00AC0A00, void, RemoveObjectReference, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00AC0AC0, void, Clear, ())
    IL2CPP_REGISTER_METHOD(0x00AC0BA0, app::Object_1*, GetObjectByID, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00AC0C60, app::ServerObject*, GetServerObjByGameojb, (app::GameObject * game_obj))
    IL2CPP_REGISTER_METHOD(0x00AC0D20, app::Object_1*, GetComponentByID, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00AC0DE0, void, RebuildAllReferences, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ServerObjectReferences * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC1060, void, cctor, ())
} // namespace app::classes::ServerObjectReferences
