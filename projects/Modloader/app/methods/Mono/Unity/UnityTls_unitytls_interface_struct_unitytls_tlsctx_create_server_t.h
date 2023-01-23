#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_protocolrange.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_callbacks.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188290, app::UnityTls_unitytls_tlsctx*, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint64_t cert_chain, uint64_t leaf_certificate_key, app::UnityTls_unitytls_errorstate* error_state))
    IL2CPP_REGISTER_METHOD(0x02188A20, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint64_t cert_chain, uint64_t leaf_certificate_key, app::UnityTls_unitytls_errorstate* error_state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::UnityTls_unitytls_tlsctx*, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t
