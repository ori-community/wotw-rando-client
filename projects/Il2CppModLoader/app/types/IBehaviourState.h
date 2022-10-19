#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBehaviourState {
        inline app::IBehaviourState__Class** type_info = (app::IBehaviourState__Class**)(modloader::win::memory::resolve_rva(0x0478CF98));
        inline app::IBehaviourState__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourState__Class>(type_info, "UberBehaviourTree", "IBehaviourState");
        }
    } // namespace IBehaviourState
} // namespace app::classes::types
