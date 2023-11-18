#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02187340, void, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t * this_ptr, app::UnityTls_unitytls_errorstate* error_state, app::UnityTls_unitytls_error_code__Enum error_code))
    IL2CPP_REGISTER_METHOD(0x021876B0, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t * this_ptr, app::UnityTls_unitytls_errorstate* error_state, app::UnityTls_unitytls_error_code__Enum error_code, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t
