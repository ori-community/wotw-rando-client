#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt32Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt32Storage__Class** type_info;
        inline app::SqlInt32Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32Storage__Class>(type_info, "System.Data.Common", "SqlInt32Storage");
        }
        inline app::SqlInt32Storage* create() {
            return il2cpp::create_object<app::SqlInt32Storage>(get_class());
        }
    } // namespace SqlInt32Storage
} // namespace app::classes::types
