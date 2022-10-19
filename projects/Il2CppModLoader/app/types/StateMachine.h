#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachine {
        inline app::StateMachine__Class** type_info = (app::StateMachine__Class**)(modloader::win::memory::resolve_rva(0x0471F5F0));
        inline app::StateMachine__Class* get_class() {
            return il2cpp::get_class<app::StateMachine__Class>(type_info, "Moon.FSM", "StateMachine");
        }
        inline app::StateMachine* create() {
            return il2cpp::create_object<app::StateMachine>(get_class());
        }
    } // namespace StateMachine
} // namespace app::classes::types
