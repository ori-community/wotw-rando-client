#pragma once
#include <Modloader/app/structs/StateMachine_1.h>
#include <Modloader/app/structs/StateMachine_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine_1 {
        inline app::StateMachine_1__Class** type_info() {
            static app::StateMachine_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachine_1__Class**)(modloader::win::memory::resolve_rva(0x04711BC0));
            }
            return cache;
        }
        inline app::StateMachine_1__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_1__Class>(type_info(), "Moon.InteractionGraph", "StateMachine");
        }
        inline app::StateMachine_1* create() {
            return il2cpp::create_object<app::StateMachine_1>(get_class());
        }
    } // namespace StateMachine_1
} // namespace app::classes::types
