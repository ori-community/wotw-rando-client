#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager_SetupTempData_Node__Array {
        namespace {
            app::InputCacheManager_SetupTempData_Node__Array__Class* type_info_ref = nullptr;
        }
        app::InputCacheManager_SetupTempData_Node__Array__Class** type_info = &type_info_ref;
        inline app::InputCacheManager_SetupTempData_Node__Array__Class* get_class() {
            return il2cpp::get_class<app::InputCacheManager_SetupTempData_Node__Array__Class>(type_info, "SmartInput", "InputCacheManager+SetupTempData+Node[]");
        }
        inline app::InputCacheManager_SetupTempData_Node__Array* create() {
            return il2cpp::create_object<app::InputCacheManager_SetupTempData_Node__Array>(get_class());
        }
    } // namespace InputCacheManager_SetupTempData_Node__Array
} // namespace app::classes::types
