#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataViewSettingCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataViewSettingCollection__Class** type_info;
        inline app::DataViewSettingCollection__Class* get_class() {
            return il2cpp::get_class<app::DataViewSettingCollection__Class>(type_info, "System.Data", "DataViewSettingCollection");
        }
        inline app::DataViewSettingCollection* create() {
            return il2cpp::create_object<app::DataViewSettingCollection>(get_class());
        }
    } // namespace DataViewSettingCollection
} // namespace app::classes::types
