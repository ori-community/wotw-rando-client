#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRow__Class** type_info;
        inline app::DataRow__Class* get_class() {
            return il2cpp::get_class<app::DataRow__Class>(type_info, "System.Data", "DataRow");
        }
        inline app::DataRow* create() {
            return il2cpp::create_object<app::DataRow>(get_class());
        }
        inline app::DataRow__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRow__Array>(get_class(), size);
        }
    } // namespace DataRow
} // namespace app::classes::types
