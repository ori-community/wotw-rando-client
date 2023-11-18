#pragma once
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/StateMachine_2__Array.h>
#include <Modloader/app/structs/StateMachine_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachine_2 {
        inline app::StateMachine_2__Class** type_info() {
            static app::StateMachine_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachine_2__Class**)(modloader::win::memory::resolve_rva(0x047470F0));
            }
            return cache;
        }
        inline app::StateMachine_2__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Class>(type_info(), "fsm", "StateMachine");
        }
        inline app::StateMachine_2* create() {
            return il2cpp::create_object<app::StateMachine_2>(get_class());
        }
        inline app::StateMachine_2__Array* create_array(int size) {
            return il2cpp::array_new<app::StateMachine_2__Array>(get_class(), size);
        }
        inline app::StateMachine_2__Array* create_array(const std::vector<app::StateMachine_2*>& items) {
            return il2cpp::array_new<app::StateMachine_2__Array>(get_class(), items);
        }
    } // namespace StateMachine_2
} // namespace app::classes::types
