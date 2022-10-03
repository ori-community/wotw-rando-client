#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTableCollection__Class** type_info;
        inline app::DataTableCollection__Class* get_class() {
            return il2cpp::get_class<app::DataTableCollection__Class>(type_info, "System.Data", "DataTableCollection");
        }
        inline app::DataTableCollection* create() {
            return il2cpp::create_object<app::DataTableCollection>(get_class());
        }
    } // namespace DataTableCollection
} // namespace app::classes::types
