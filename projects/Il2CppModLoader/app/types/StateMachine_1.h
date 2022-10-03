#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachine_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachine_1__Class** type_info;
        inline app::StateMachine_1__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_1__Class>(type_info, "Moon.InteractionGraph", "StateMachine");
        }
        inline app::StateMachine_1* create() {
            return il2cpp::create_object<app::StateMachine_1>(get_class());
        }
    } // namespace StateMachine_1
} // namespace app::classes::types
