#pragma once
#include <Modloader/app/structs/PCQualityModeManager_QualityMode__Enum.h>
#include <Modloader/app/structs/PCQualityModeManager_QualityMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PCQualityModeManager_QualityMode__Enum {
        inline app::PCQualityModeManager_QualityMode__Enum__Class** type_info() {
            static app::PCQualityModeManager_QualityMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PCQualityModeManager_QualityMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743A90));
            }
            return cache;
        }
        inline app::PCQualityModeManager_QualityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PCQualityModeManager_QualityMode__Enum__Class>(type_info(), "MoonDataPlatform", "PCQualityModeManager", "QualityMode");
        }
        inline app::PCQualityModeManager_QualityMode__Enum* create() {
            return il2cpp::create_object<app::PCQualityModeManager_QualityMode__Enum>(get_class());
        }
    } // namespace PCQualityModeManager_QualityMode__Enum
} // namespace app::classes::types
