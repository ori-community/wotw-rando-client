#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxQualityModeManager_QualityMode__Enum__Array {
        namespace {
            inline app::XboxQualityModeManager_QualityMode__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::XboxQualityModeManager_QualityMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxQualityModeManager_QualityMode__Enum__Array__Class>(type_info, "MoonDataPlatform", "XboxQualityModeManager+QualityMode[]");
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array* create() {
            return il2cpp::create_object<app::XboxQualityModeManager_QualityMode__Enum__Array>(get_class());
        }
    } // namespace XboxQualityModeManager_QualityMode__Enum__Array
} // namespace app::classes::types
