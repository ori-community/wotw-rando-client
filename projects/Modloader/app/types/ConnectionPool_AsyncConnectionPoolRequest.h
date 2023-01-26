#pragma once
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest.h>
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConnectionPool_AsyncConnectionPoolRequest {
        inline app::ConnectionPool_AsyncConnectionPoolRequest__Class** type_info() {
            static app::ConnectionPool_AsyncConnectionPoolRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConnectionPool_AsyncConnectionPoolRequest__Class**)(modloader::win::memory::resolve_rva(0x047754A8));
            }
            return cache;
        }
        inline app::ConnectionPool_AsyncConnectionPoolRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::ConnectionPool_AsyncConnectionPoolRequest__Class>(type_info(), "System.Net", "ConnectionPool", "AsyncConnectionPoolRequest");
        }
        inline app::ConnectionPool_AsyncConnectionPoolRequest* create() {
            return il2cpp::create_object<app::ConnectionPool_AsyncConnectionPoolRequest>(get_class());
        }
    } // namespace ConnectionPool_AsyncConnectionPoolRequest
} // namespace app::classes::types
