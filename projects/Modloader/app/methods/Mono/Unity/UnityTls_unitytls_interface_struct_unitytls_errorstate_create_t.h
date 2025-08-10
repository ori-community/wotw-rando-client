#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02186FB0,
        app::UnityTls_unitytls_errorstate,
        Invoke,
        app::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x01C7A680,
        app::UnityTls_unitytls_errorstate,
        EndInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t
