#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataViewSettingCollection {
        inline app::DataViewSettingCollection__Class** type_info = (app::DataViewSettingCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F290));
        inline app::DataViewSettingCollection__Class* get_class() {
            return il2cpp::get_class<app::DataViewSettingCollection__Class>(type_info, "System.Data", "DataViewSettingCollection");
        }
        inline app::DataViewSettingCollection* create() {
            return il2cpp::create_object<app::DataViewSettingCollection>(get_class());
        }
    } // namespace DataViewSettingCollection
} // namespace app::classes::types
