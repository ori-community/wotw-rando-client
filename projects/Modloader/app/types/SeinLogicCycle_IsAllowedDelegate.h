#pragma once
#include <Modloader/app/structs/SeinLogicCycle_IsAllowedDelegate.h>
#include <Modloader/app/structs/SeinLogicCycle_IsAllowedDelegate__Array.h>
#include <Modloader/app/structs/SeinLogicCycle_IsAllowedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLogicCycle_IsAllowedDelegate {
        inline app::SeinLogicCycle_IsAllowedDelegate__Class** type_info() {
            static app::SeinLogicCycle_IsAllowedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472C210));
            }
            return cache;
        }
        inline app::SeinLogicCycle_IsAllowedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_IsAllowedDelegate__Class>(type_info(), "", "SeinLogicCycle", "IsAllowedDelegate");
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
