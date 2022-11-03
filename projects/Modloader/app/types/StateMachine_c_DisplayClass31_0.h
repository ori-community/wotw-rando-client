#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachine_c_DisplayClass31_0 {
        inline app::StateMachine_c_DisplayClass31_0__Class** type_info = (app::StateMachine_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0477E960));
        inline app::StateMachine_c_DisplayClass31_0__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachine_c_DisplayClass31_0__Class>(type_info, "Moon.InteractionGraph", "StateMachine", "<>c__DisplayClass31_0");
        }
        inline app::StateMachine_c_DisplayClass31_0* create() {
            return il2cpp::create_object<app::StateMachine_c_DisplayClass31_0>(get_class());
        }
    } // namespace StateMachine_c_DisplayClass31_0
} // namespace app::classes::types
