#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt16__Class** type_info;
        inline app::SqlInt16__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16__Class>(type_info, "System.Data.SqlTypes", "SqlInt16");
        }
        inline app::SqlInt16* create() {
            return il2cpp::create_object<app::SqlInt16>(get_class());
        }
        inline app::SqlInt16__Boxed* box(app::SqlInt16 value) {
            return il2cpp::box_value<app::SqlInt16__Boxed>(get_class(), value);
        }
        inline app::SqlInt16__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlInt16__Array>(get_class(), size);
        }
    } // namespace SqlInt16
} // namespace app::classes::types
