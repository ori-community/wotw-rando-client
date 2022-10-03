#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConnectionPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConnectionPool__Class** type_info;
        inline app::ConnectionPool__Class* get_class() {
            return il2cpp::get_class<app::ConnectionPool__Class>(type_info, "System.Net", "ConnectionPool");
        }
        inline app::ConnectionPool* create() {
            return il2cpp::create_object<app::ConnectionPool>(get_class());
        }
    } // namespace ConnectionPool
} // namespace app::classes::types
