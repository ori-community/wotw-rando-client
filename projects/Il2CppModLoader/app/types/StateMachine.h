#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachine__Class** type_info;
        inline app::StateMachine__Class* get_class() {
            return il2cpp::get_class<app::StateMachine__Class>(type_info, "Moon.FSM", "StateMachine");
        }
        inline app::StateMachine* create() {
            return il2cpp::create_object<app::StateMachine>(get_class());
        }
    } // namespace StateMachine
} // namespace app::classes::types
