#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataViewSetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataViewSetting__Class** type_info;
        inline app::DataViewSetting__Class* get_class() {
            return il2cpp::get_class<app::DataViewSetting__Class>(type_info, "System.Data", "DataViewSetting");
        }
        inline app::DataViewSetting* create() {
            return il2cpp::create_object<app::DataViewSetting>(get_class());
        }
    } // namespace DataViewSetting
} // namespace app::classes::types
