#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PCQualityModeManager_QualityMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PCQualityModeManager_QualityMode__Enum__Class** type_info;
        inline app::PCQualityModeManager_QualityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PCQualityModeManager_QualityMode__Enum__Class>(type_info, "MoonDataPlatform", "PCQualityModeManager", "QualityMode");
        }
        inline app::PCQualityModeManager_QualityMode__Enum* create() {
            return il2cpp::create_object<app::PCQualityModeManager_QualityMode__Enum>(get_class());
        }
    } // namespace PCQualityModeManager_QualityMode__Enum
} // namespace app::classes::types
