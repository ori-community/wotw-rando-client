#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuLogicCycle_IsAllowedDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KuLogicCycle_IsAllowedDelegate__Class** type_info;
        inline app::KuLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KuLogicCycle_IsAllowedDelegate__Class>(type_info, "", "KuLogicCycle", "IsAllowedDelegate");
        }
        inline app::KuLogicCycle_IsAllowedDelegate* create() {
            return il2cpp::create_object<app::KuLogicCycle_IsAllowedDelegate>(get_class());
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::KuLogicCycle_IsAllowedDelegate__Array>(get_class(), size);
        }
    } // namespace KuLogicCycle_IsAllowedDelegate
} // namespace app::classes::types
