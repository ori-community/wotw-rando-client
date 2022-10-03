#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager_SetupTempData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputCacheManager_SetupTempData__Class** type_info;
        inline app::InputCacheManager_SetupTempData__Class* get_class() {
            return il2cpp::get_nested_class<app::InputCacheManager_SetupTempData__Class>(type_info, "SmartInput", "InputCacheManager", "SetupTempData");
        }
        inline app::InputCacheManager_SetupTempData* create() {
            return il2cpp::create_object<app::InputCacheManager_SetupTempData>(get_class());
        }
    } // namespace InputCacheManager_SetupTempData
} // namespace app::classes::types
