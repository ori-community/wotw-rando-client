#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataColumnCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataColumnCollection__Class** type_info;
        inline app::DataColumnCollection__Class* get_class() {
            return il2cpp::get_class<app::DataColumnCollection__Class>(type_info, "System.Data", "DataColumnCollection");
        }
        inline app::DataColumnCollection* create() {
            return il2cpp::create_object<app::DataColumnCollection>(get_class());
        }
    } // namespace DataColumnCollection
} // namespace app::classes::types
