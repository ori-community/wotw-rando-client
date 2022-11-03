#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLogicCycle_IsAllowedDelegate {
        inline app::SeinLogicCycle_IsAllowedDelegate__Class** type_info = (app::SeinLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472C210));
        inline app::SeinLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_IsAllowedDelegate__Class>(type_info, "", "SeinLogicCycle", "IsAllowedDelegate");
        }
        inline app::SeinLogicCycle_IsAllowedDelegate* create() {
            return il2cpp::create_object<app::SeinLogicCycle_IsAllowedDelegate>(get_class());
        }
        inline app::SeinLogicCycle_IsAllowedDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinLogicCycle_IsAllowedDelegate__Array>(get_class(), size);
        }
        inline app::SeinLogicCycle_IsAllowedDelegate__Array* create_array(const std::vector<app::SeinLogicCycle_IsAllowedDelegate*>& items) {
            return il2cpp::array_new<app::SeinLogicCycle_IsAllowedDelegate__Array>(get_class(), items);
        }
    } // namespace SeinLogicCycle_IsAllowedDelegate
} // namespace app::classes::types
