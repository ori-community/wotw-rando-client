#pragma once
#include <Modloader/app/structs/DataViewSettingCollection.h>
#include <Modloader/app/structs/DataViewSettingCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewSettingCollection {
        inline app::DataViewSettingCollection__Class** type_info() {
            static app::DataViewSettingCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewSettingCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F290));
            }
            return cache;
        }
        inline app::DataViewSettingCollection__Class* get_class() {
            return il2cpp::get_class<app::DataViewSettingCollection__Class>(type_info(), "System.Data", "DataViewSettingCollection");
        }
        inline app::DataViewSettingCollection* create() {
            return il2cpp::create_object<app::DataViewSettingCollection>(get_class());
        }
    } // namespace DataViewSettingCollection
} // namespace app::classes::types
