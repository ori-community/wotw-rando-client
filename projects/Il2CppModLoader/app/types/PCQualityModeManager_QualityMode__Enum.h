#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PCQualityModeManager_QualityMode__Enum {
        inline app::PCQualityModeManager_QualityMode__Enum__Class** type_info = (app::PCQualityModeManager_QualityMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743A90));
        inline app::PCQualityModeManager_QualityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PCQualityModeManager_QualityMode__Enum__Class>(type_info, "MoonDataPlatform", "PCQualityModeManager", "QualityMode");
        }
        inline app::PCQualityModeManager_QualityMode__Enum* create() {
            return il2cpp::create_object<app::PCQualityModeManager_QualityMode__Enum>(get_class());
        }
    } // namespace PCQualityModeManager_QualityMode__Enum
} // namespace app::classes::types
