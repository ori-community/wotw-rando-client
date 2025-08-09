#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x02659150,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData x,
        app::ServerPhysicalSystemManager_RigidbodyStateData y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02659220,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* array,
        app::ServerPhysicalSystemManager_RigidbodyStateData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x026593D0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* array,
        app::ServerPhysicalSystemManager_RigidbodyStateData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_
