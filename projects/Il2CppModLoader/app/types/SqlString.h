#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlString__Class** type_info;
        inline app::SqlString__Class* get_class() {
            return il2cpp::get_class<app::SqlString__Class>(type_info, "System.Data.SqlTypes", "SqlString");
        }
        inline app::SqlString* create() {
            return il2cpp::create_object<app::SqlString>(get_class());
        }
        inline app::SqlString__Boxed* box(app::SqlString value) {
            return il2cpp::box_value<app::SqlString__Boxed>(get_class(), value);
        }
        inline app::SqlString__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlString__Array>(get_class(), size);
        }
    } // namespace SqlString
} // namespace app::classes::types
