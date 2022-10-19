#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBehaviourEvent {
        inline app::IBehaviourEvent__Class** type_info = (app::IBehaviourEvent__Class**)(modloader::win::memory::resolve_rva(0x0474DBF0));
        inline app::IBehaviourEvent__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourEvent__Class>(type_info, "UberBehaviourTree", "IBehaviourEvent");
        }
        inline app::IBehaviourEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourEvent__Array>(get_class(), size);
        }
        inline app::IBehaviourEvent__Array* create_array(const std::vector<app::IBehaviourEvent*>& items) {
            return il2cpp::array_new<app::IBehaviourEvent__Array>(get_class(), items);
        }
    } // namespace IBehaviourEvent
} // namespace app::classes::types
