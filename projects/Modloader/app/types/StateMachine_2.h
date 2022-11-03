#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachine_2 {
        inline app::StateMachine_2__Class** type_info = (app::StateMachine_2__Class**)(modloader::win::memory::resolve_rva(0x047470F0));
        inline app::StateMachine_2__Class* get_class() {
            return il2cpp::get_class<app::StateMachine_2__Class>(type_info, "fsm", "StateMachine");
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
