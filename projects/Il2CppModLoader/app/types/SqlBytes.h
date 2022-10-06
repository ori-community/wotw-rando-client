#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBytes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBytes__Class** type_info;
        inline app::SqlBytes__Class* get_class() {
            return il2cpp::get_class<app::SqlBytes__Class>(type_info, "System.Data.SqlTypes", "SqlBytes");
        }
        inline app::SqlBytes* create() {
            return il2cpp::create_object<app::SqlBytes>(get_class());
        }
        inline app::SqlBytes__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlBytes__Array>(get_class(), size);
        }
        inline app::SqlBytes__Array* create_array(const std::vector<app::SqlBytes*>& items) {
            return il2cpp::array_new<app::SqlBytes__Array>(get_class(), items);
        }
    } // namespace SqlBytes
} // namespace app::classes::types
