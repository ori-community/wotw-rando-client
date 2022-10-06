#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTable__Class** type_info;
        inline app::DataTable__Class* get_class() {
            return il2cpp::get_class<app::DataTable__Class>(type_info, "System.Data", "DataTable");
        }
        inline app::DataTable* create() {
            return il2cpp::create_object<app::DataTable>(get_class());
        }
        inline app::DataTable__Array* create_array(int size) {
            return il2cpp::array_new<app::DataTable__Array>(get_class(), size);
        }
        inline app::DataTable__Array* create_array(const std::vector<app::DataTable*>& items) {
            return il2cpp::array_new<app::DataTable__Array>(get_class(), items);
        }
    } // namespace DataTable
} // namespace app::classes::types
