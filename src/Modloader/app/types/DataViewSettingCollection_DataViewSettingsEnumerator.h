#pragma once
#include <Modloader/app/structs/DataViewSettingCollection_DataViewSettingsEnumerator.h>
#include <Modloader/app/structs/DataViewSettingCollection_DataViewSettingsEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewSettingCollection_DataViewSettingsEnumerator {
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator__Class** type_info() {
            static app::DataViewSettingCollection_DataViewSettingsEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewSettingCollection_DataViewSettingsEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04786B00));
            }
            return cache;
        }
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::DataViewSettingCollection_DataViewSettingsEnumerator__Class>(type_info(), "System.Data", "DataViewSettingCollection", "DataViewSettingsEnumerator");
        }
        inline app::DataViewSettingCollection_DataViewSettingsEnumerator* create() {
            return il2cpp::create_object<app::DataViewSettingCollection_DataViewSettingsEnumerator>(get_class());
        }
    } // namespace DataViewSettingCollection_DataViewSettingsEnumerator
} // namespace app::classes::types
