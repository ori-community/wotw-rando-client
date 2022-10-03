#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataViewManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataViewManager__Class** type_info;
        inline app::DataViewManager__Class* get_class() {
            return il2cpp::get_class<app::DataViewManager__Class>(type_info, "System.Data", "DataViewManager");
        }
        inline app::DataViewManager* create() {
            return il2cpp::create_object<app::DataViewManager>(get_class());
        }
    } // namespace DataViewManager
} // namespace app::classes::types
