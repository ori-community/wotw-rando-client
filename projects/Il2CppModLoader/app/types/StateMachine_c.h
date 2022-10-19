#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachine_c {
        inline app::StateMachine_c__Class** type_info = (app::StateMachine_c__Class**)(modloader::win::memory::resolve_rva(0x0471FC78));
        inline app::StateMachine_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachine_c__Class>(type_info, "Moon.InteractionGraph", "StateMachine", "<>c");
        }
        inline app::StateMachine_c* create() {
            return il2cpp::create_object<app::StateMachine_c>(get_class());
        }
    } // namespace StateMachine_c
} // namespace app::classes::types
