#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlSingle__Class** type_info;
        inline app::SqlSingle__Class* get_class() {
            return il2cpp::get_class<app::SqlSingle__Class>(type_info, "System.Data.SqlTypes", "SqlSingle");
        }
        inline app::SqlSingle* create() {
            return il2cpp::create_object<app::SqlSingle>(get_class());
        }
        inline app::SqlSingle__Boxed* box(app::SqlSingle value) {
            return il2cpp::box_value<app::SqlSingle__Boxed>(get_class(), value);
        }
        inline app::SqlSingle__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlSingle__Array>(get_class(), size);
        }
        inline app::SqlSingle__Array* create_array(const std::vector<app::SqlSingle>& items) {
            return il2cpp::array_new<app::SqlSingle__Array>(get_class(), items);
        }
    } // namespace SqlSingle
} // namespace app::classes::types
