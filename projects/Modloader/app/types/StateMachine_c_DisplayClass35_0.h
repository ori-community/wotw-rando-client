#pragma once
#include <Modloader/app/structs/StateMachine_c_DisplayClass35_0.h>
#include <Modloader/app/structs/StateMachine_c_DisplayClass35_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine_c_DisplayClass35_0 {
        inline app::StateMachine_c_DisplayClass35_0__Class** type_info() {
            static app::StateMachine_c_DisplayClass35_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachine_c_DisplayClass35_0__Class**)(modloader::win::memory::resolve_rva(0x04799AD0));
            }
            return cache;
        }
        inline app::StateMachine_c_DisplayClass35_0__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachine_c_DisplayClass35_0__Class>(type_info(), "fsm", "StateMachine", "<>c__DisplayClass35_0");
        }
        inline app::StateMachine_c_DisplayClass35_0* create() {
            return il2cpp::create_object<app::StateMachine_c_DisplayClass35_0>(get_class());
        }
    } // namespace StateMachine_c_DisplayClass35_0
} // namespace app::classes::types
