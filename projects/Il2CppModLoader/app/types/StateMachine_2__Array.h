#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachine_2__Array {
        namespace {
            app::StateMachine_2__Array__Class* type_info_ref = nullptr;
        }
        app::StateMachine_2__Array__Class** type_info = &type_info_ref;
        inline app::StateMachine_2__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Array__Class>(type_info, "fsm", "StateMachine[]");
        }
        inline app::StateMachine_2__Array* create() {
            return il2cpp::create_object<app::StateMachine_2__Array>(get_class());
        }
    } // namespace StateMachine_2__Array
} // namespace app::classes::types
