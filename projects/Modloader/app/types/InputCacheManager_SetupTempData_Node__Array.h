#pragma once
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node__Array.h>
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager_SetupTempData_Node__Array {
        inline app::InputCacheManager_SetupTempData_Node__Array__Class** type_info() {
            static app::InputCacheManager_SetupTempData_Node__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputCacheManager_SetupTempData_Node__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputCacheManager_SetupTempData_Node__Array__Class* get_class() {
            return il2cpp::get_class<app::InputCacheManager_SetupTempData_Node__Array__Class>(type_info(), "SmartInput", "InputCacheManager+SetupTempData+Node[]");
        }
        inline app::InputCacheManager_SetupTempData_Node__Array* create() {
            return il2cpp::create_object<app::InputCacheManager_SetupTempData_Node__Array>(get_class());
        }
    } // namespace InputCacheManager_SetupTempData_Node__Array
} // namespace app::classes::types
