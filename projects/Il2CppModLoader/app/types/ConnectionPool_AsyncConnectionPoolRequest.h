#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConnectionPool_AsyncConnectionPoolRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConnectionPool_AsyncConnectionPoolRequest__Class** type_info;
        inline app::ConnectionPool_AsyncConnectionPoolRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::ConnectionPool_AsyncConnectionPoolRequest__Class>(type_info, "System.Net", "ConnectionPool", "AsyncConnectionPoolRequest");
        }
        inline app::ConnectionPool_AsyncConnectionPoolRequest* create() {
            return il2cpp::create_object<app::ConnectionPool_AsyncConnectionPoolRequest>(get_class());
        }
    } // namespace ConnectionPool_AsyncConnectionPoolRequest
} // namespace app::classes::types
