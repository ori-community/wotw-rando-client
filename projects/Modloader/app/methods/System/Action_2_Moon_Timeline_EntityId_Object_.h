#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_Timeline_EntityId_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_Timeline_EntityId_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_Moon_Timeline_EntityId_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02C0E560, void, Invoke, app::Action_2_Moon_Timeline_EntityId_Object_* this_ptr, app::EntityId arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(
        0x02C0E8C0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_2_Moon_Timeline_EntityId_Object_* this_ptr,
        app::EntityId arg1,
        app::Object* arg2,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_2_Moon_Timeline_EntityId_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_2_Moon_Timeline_EntityId_Object_
