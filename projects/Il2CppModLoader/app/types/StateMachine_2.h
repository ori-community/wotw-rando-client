#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachine_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachine_2__Class** type_info;
        inline app::StateMachine_2__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Class>(type_info, "fsm", "StateMachine");
        }
        inline app::StateMachine_2* create() {
            return il2cpp::create_object<app::StateMachine_2>(get_class());
        }
        inline app::StateMachine_2__Array* create_array(int size) {
            return il2cpp::array_new<app::StateMachine_2__Array>(get_class(), size);
        }
    } // namespace StateMachine_2
} // namespace app::classes::types
