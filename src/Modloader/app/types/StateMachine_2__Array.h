#pragma once
#include <Modloader/app/structs/StateMachine_2__Array.h>
#include <Modloader/app/structs/StateMachine_2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine_2__Array {
        inline app::StateMachine_2__Array__Class** type_info() {
            static app::StateMachine_2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMachine_2__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMachine_2__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Array__Class>(type_info(), "fsm", "StateMachine[]");
        }
        inline app::StateMachine_2__Array* create() {
            return il2cpp::create_object<app::StateMachine_2__Array>(get_class());
        }
    } // namespace StateMachine_2__Array
} // namespace app::classes::types
