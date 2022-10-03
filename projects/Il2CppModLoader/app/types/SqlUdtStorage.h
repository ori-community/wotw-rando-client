#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlUdtStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlUdtStorage__Class** type_info;
        inline app::SqlUdtStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlUdtStorage__Class>(type_info, "System.Data.Common", "SqlUdtStorage");
        }
        inline app::SqlUdtStorage* create() {
            return il2cpp::create_object<app::SqlUdtStorage>(get_class());
        }
    } // namespace SqlUdtStorage
} // namespace app::classes::types
