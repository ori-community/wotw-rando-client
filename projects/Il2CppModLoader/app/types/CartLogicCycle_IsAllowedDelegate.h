#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartLogicCycle_IsAllowedDelegate {
        inline app::CartLogicCycle_IsAllowedDelegate__Class** type_info = (app::CartLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x04708500));
        inline app::CartLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::CartLogicCycle_IsAllowedDelegate__Class>(type_info, "", "CartLogicCycle", "IsAllowedDelegate");
        }
        inline app::CartLogicCycle_IsAllowedDelegate* create() {
            return il2cpp::create_object<app::CartLogicCycle_IsAllowedDelegate>(get_class());
        }
        inline app::CartLogicCycle_IsAllowedDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::CartLogicCycle_IsAllowedDelegate__Array>(get_class(), size);
        }
        inline app::CartLogicCycle_IsAllowedDelegate__Array* create_array(const std::vector<app::CartLogicCycle_IsAllowedDelegate*>& items) {
            return il2cpp::array_new<app::CartLogicCycle_IsAllowedDelegate__Array>(get_class(), items);
        }
    } // namespace CartLogicCycle_IsAllowedDelegate
} // namespace app::classes::types
