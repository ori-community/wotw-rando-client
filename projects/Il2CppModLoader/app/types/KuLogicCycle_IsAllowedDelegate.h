#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuLogicCycle_IsAllowedDelegate {
        inline app::KuLogicCycle_IsAllowedDelegate__Class** type_info = (app::KuLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x04740DD0));
        inline app::KuLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KuLogicCycle_IsAllowedDelegate__Class>(type_info, "", "KuLogicCycle", "IsAllowedDelegate");
        }
        inline app::KuLogicCycle_IsAllowedDelegate* create() {
            return il2cpp::create_object<app::KuLogicCycle_IsAllowedDelegate>(get_class());
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::KuLogicCycle_IsAllowedDelegate__Array>(get_class(), size);
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array* create_array(const std::vector<app::KuLogicCycle_IsAllowedDelegate*>& items) {
            return il2cpp::array_new<app::KuLogicCycle_IsAllowedDelegate__Array>(get_class(), items);
        }
    } // namespace KuLogicCycle_IsAllowedDelegate
} // namespace app::classes::types
