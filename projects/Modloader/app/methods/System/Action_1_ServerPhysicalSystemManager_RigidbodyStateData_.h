#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>

namespace app::classes::System::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02A00490,
        void,
        Invoke,
        app::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A03AB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_1_ServerPhysicalSystemManager_RigidbodyStateData_
