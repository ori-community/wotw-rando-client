#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBehaviourEvent__Class** type_info;
        inline app::IBehaviourEvent__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourEvent__Class>(type_info, "UberBehaviourTree", "IBehaviourEvent");
        }
        inline app::IBehaviourEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourEvent__Array>(get_class(), size);
        }
    } // namespace IBehaviourEvent
} // namespace app::classes::types
