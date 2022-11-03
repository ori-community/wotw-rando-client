#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataViewSettingCollection_DataViewSettingsEnumerator {
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator__Class** type_info = (app::DataViewSettingCollection_DataViewSettingsEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04786B00));
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::DataViewSettingCollection_DataViewSettingsEnumerator__Class>(type_info, "System.Data", "DataViewSettingCollection", "DataViewSettingsEnumerator");
        }
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator* create() {
            return il2cpp::create_object<app::DataViewSettingCollection_DataViewSettingsEnumerator>(get_class());
        }
    } // namespace DataViewSettingCollection_DataViewSettingsEnumerator
} // namespace app::classes::types
