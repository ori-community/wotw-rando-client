#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataViewSettingCollection_DataViewSettingsEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataViewSettingCollection_DataViewSettingsEnumerator__Class** type_info;
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::DataViewSettingCollection_DataViewSettingsEnumerator__Class>(type_info, "System.Data", "DataViewSettingCollection", "DataViewSettingsEnumerator");
        }
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator* create() {
            return il2cpp::create_object<app::DataViewSettingCollection_DataViewSettingsEnumerator>(get_class());
        }
    } // namespace DataViewSettingCollection_DataViewSettingsEnumerator
} // namespace app::classes::types
