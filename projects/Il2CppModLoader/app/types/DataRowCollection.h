#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowCollection__Class** type_info;
        inline app::DataRowCollection__Class* get_class() {
            return il2cpp::get_class<app::DataRowCollection__Class>(type_info, "System.Data", "DataRowCollection");
        }
        inline app::DataRowCollection* create() {
            return il2cpp::create_object<app::DataRowCollection>(get_class());
        }
    } // namespace DataRowCollection
} // namespace app::classes::types
