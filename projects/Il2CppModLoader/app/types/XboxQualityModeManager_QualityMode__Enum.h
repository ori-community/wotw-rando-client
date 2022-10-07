#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxQualityModeManager_QualityMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxQualityModeManager_QualityMode__Enum__Class** type_info;
        inline app::XboxQualityModeManager_QualityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxQualityModeManager_QualityMode__Enum__Class>(type_info, "MoonDataPlatform", "XboxQualityModeManager", "QualityMode");
        }
        inline app::XboxQualityModeManager_QualityMode__Enum* create() {
            return il2cpp::create_object<app::XboxQualityModeManager_QualityMode__Enum>(get_class());
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxQualityModeManager_QualityMode__Enum__Array>(get_class(), size);
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array* create_array(const std::vector<app::XboxQualityModeManager_QualityMode__Enum*>& items) {
            return il2cpp::array_new<app::XboxQualityModeManager_QualityMode__Enum__Array>(get_class(), items);
        }
    } // namespace XboxQualityModeManager_QualityMode__Enum
} // namespace app::classes::types
