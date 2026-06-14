#pragma once
#include <Modloader/app/structs/InputCacheManager_SetupTempData.h>
#include <Modloader/app/structs/InputCacheManager_SetupTempData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager_SetupTempData {
        inline app::InputCacheManager_SetupTempData__Class** type_info() {
            static app::InputCacheManager_SetupTempData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputCacheManager_SetupTempData__Class**)(modloader::win::memory::resolve_rva(0x047237C8));
            }
            return cache;
        }
        inline app::InputCacheManager_SetupTempData__Class* get_class() {
            return il2cpp::get_nested_class<app::InputCacheManager_SetupTempData__Class>(type_info(), "SmartInput", "InputCacheManager", "SetupTempData");
        }
        inline app::InputCacheManager_SetupTempData* create() {
            return il2cpp::create_object<app::InputCacheManager_SetupTempData>(get_class());
        }
    } // namespace InputCacheManager_SetupTempData
} // namespace app::classes::types
