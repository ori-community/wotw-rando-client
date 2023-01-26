#pragma once
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum__Array.h>
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxQualityModeManager_QualityMode__Enum__Array {
        inline app::XboxQualityModeManager_QualityMode__Enum__Array__Class** type_info() {
            static app::XboxQualityModeManager_QualityMode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxQualityModeManager_QualityMode__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxQualityModeManager_QualityMode__Enum__Array__Class>(type_info(), "MoonDataPlatform", "XboxQualityModeManager+QualityMode[]");
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Array* create() {
            return il2cpp::create_object<app::XboxQualityModeManager_QualityMode__Enum__Array>(get_class());
        }
    } // namespace XboxQualityModeManager_QualityMode__Enum__Array
} // namespace app::classes::types
