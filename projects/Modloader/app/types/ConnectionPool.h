#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConnectionPool {
        inline app::ConnectionPool__Class** type_info = (app::ConnectionPool__Class**)(modloader::win::memory::resolve_rva(0x04791350));
        inline app::ConnectionPool__Class* get_class() {
            return il2cpp::get_class<app::ConnectionPool__Class>(type_info, "System.Net", "ConnectionPool");
        }
        inline app::ConnectionPool* create() {
            return il2cpp::create_object<app::ConnectionPool>(get_class());
        }
    } // namespace ConnectionPool
} // namespace app::classes::types
