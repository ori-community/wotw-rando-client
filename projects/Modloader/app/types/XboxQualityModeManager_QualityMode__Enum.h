#pragma once
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum.h>
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum__Array.h>
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxQualityModeManager_QualityMode__Enum {
        inline app::XboxQualityModeManager_QualityMode__Enum__Class** type_info() {
            static app::XboxQualityModeManager_QualityMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxQualityModeManager_QualityMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740650));
            }
            return cache;
        }
        inline app::XboxQualityModeManager_QualityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxQualityModeManager_QualityMode__Enum__Class>(type_info(), "MoonDataPlatform", "XboxQualityModeManager", "QualityMode");
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
