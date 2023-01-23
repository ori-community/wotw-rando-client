#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateMachine_2__Array__Class.h>
#include <Modloader/app/structs/StateMachine_2__Array.h>

namespace app::classes::types {
    namespace StateMachine_2__Array {
        namespace {
            inline app::StateMachine_2__Array__Class* type_info_ref = nullptr;
        }
        inline app::StateMachine_2__Array__Class** type_info = &type_info_ref;
        inline app::StateMachine_2__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Array__Class>(type_info, "fsm", "StateMachine[]");
        }
        inline app::StateMachine_2__Array* create() {
            return il2cpp::create_object<app::StateMachine_2__Array>(get_class());
        }
    } // namespace StateMachine_2__Array
} // namespace app::classes::types
