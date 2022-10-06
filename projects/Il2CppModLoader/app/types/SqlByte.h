#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlByte__Class** type_info;
        inline app::SqlByte__Class* get_class() {
            return il2cpp::get_class<app::SqlByte__Class>(type_info, "System.Data.SqlTypes", "SqlByte");
        }
        inline app::SqlByte* create() {
            return il2cpp::create_object<app::SqlByte>(get_class());
        }
        inline app::SqlByte__Boxed* box(app::SqlByte value) {
            return il2cpp::box_value<app::SqlByte__Boxed>(get_class(), value);
        }
        inline app::SqlByte__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlByte__Array>(get_class(), size);
        }
        inline app::SqlByte__Array* create_array(const std::vector<app::SqlByte__Boxed>& items) {
            return il2cpp::array_new<app::SqlByte__Array>(get_class(), items);
        }
    } // namespace SqlByte
} // namespace app::classes::types
