#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager_SetupTempData_Node {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputCacheManager_SetupTempData_Node__Class** type_info;
        inline app::InputCacheManager_SetupTempData_Node__Class* get_class() {
            return il2cpp::get_nested_class<app::InputCacheManager_SetupTempData_Node__Class>(type_info, "SmartInput", "InputCacheManager+SetupTempData", "Node");
        }
        inline app::InputCacheManager_SetupTempData_Node* create() {
            return il2cpp::create_object<app::InputCacheManager_SetupTempData_Node>(get_class());
        }
        inline app::InputCacheManager_SetupTempData_Node__Array* create_array(int size) {
            return il2cpp::array_new<app::InputCacheManager_SetupTempData_Node__Array>(get_class(), size);
        }
        inline app::InputCacheManager_SetupTempData_Node__Array* create_array(const std::vector<app::InputCacheManager_SetupTempData_Node*>& items) {
            return il2cpp::array_new<app::InputCacheManager_SetupTempData_Node__Array>(get_class(), items);
        }
    } // namespace InputCacheManager_SetupTempData_Node
} // namespace app::classes::types
