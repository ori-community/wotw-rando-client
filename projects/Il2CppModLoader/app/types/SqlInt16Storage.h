#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt16Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt16Storage__Class** type_info;
        inline app::SqlInt16Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16Storage__Class>(type_info, "System.Data.Common", "SqlInt16Storage");
        }
        inline app::SqlInt16Storage* create() {
            return il2cpp::create_object<app::SqlInt16Storage>(get_class());
        }
    } // namespace SqlInt16Storage
} // namespace app::classes::types
