#pragma once
#include <Modloader/app/structs/StateMachine.h>
#include <Modloader/app/structs/StateMachine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine {
        inline app::StateMachine__Class** type_info() {
            static app::StateMachine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachine__Class**)(modloader::win::memory::resolve_rva(0x0471F5F0));
            }
            return cache;
        }
        inline app::StateMachine__Class* get_class() {
            return il2cpp::get_class<app::StateMachine__Class>(type_info(), "Moon.FSM", "StateMachine");
        }
        inline app::StateMachine* create() {
            return il2cpp::create_object<app::StateMachine>(get_class());
        }
    } // namespace StateMachine
} // namespace app::classes::types
