#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartLogicCycle_IsAllowedDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartLogicCycle_IsAllowedDelegate__Class** type_info;
        inline app::CartLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::CartLogicCycle_IsAllowedDelegate__Class>(type_info, "", "CartLogicCycle", "IsAllowedDelegate");
        }
        inline app::CartLogicCycle_IsAllowedDelegate* create() {
            return il2cpp::create_object<app::CartLogicCycle_IsAllowedDelegate>(get_class());
        }
        inline app::CartLogicCycle_IsAllowedDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::CartLogicCycle_IsAllowedDelegate__Array>(get_class(), size);
        }
    } // namespace CartLogicCycle_IsAllowedDelegate
} // namespace app::classes::types
