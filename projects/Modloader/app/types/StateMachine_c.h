#pragma once
#include <Modloader/app/structs/StateMachine_c.h>
#include <Modloader/app/structs/StateMachine_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine_c {
        inline app::StateMachine_c__Class** type_info() {
            static app::StateMachine_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachine_c__Class**)(modloader::win::memory::resolve_rva(0x0471FC78));
            }
            return cache;
        }
        inline app::StateMachine_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachine_c__Class>(type_info(), "Moon.InteractionGraph", "StateMachine", "<>c");
        }
        inline app::StateMachine_c* create() {
            return il2cpp::create_object<app::StateMachine_c>(get_class());
        }
    } // namespace StateMachine_c
} // namespace app::classes::types
