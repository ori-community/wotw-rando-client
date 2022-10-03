#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt64Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt64Storage__Class** type_info;
        inline app::SqlInt64Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt64Storage__Class>(type_info, "System.Data.Common", "SqlInt64Storage");
        }
        inline app::SqlInt64Storage* create() {
            return il2cpp::create_object<app::SqlInt64Storage>(get_class());
        }
    } // namespace SqlInt64Storage
} // namespace app::classes::types
