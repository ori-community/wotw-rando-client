#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameStateMachine_State__Enum {
        inline app::GameStateMachine_State__Enum__Class** type_info = (app::GameStateMachine_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C590));
        inline app::GameStateMachine_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameStateMachine_State__Enum__Class>(type_info, "", "GameStateMachine", "State");
        }
        inline app::GameStateMachine_State__Enum* create() {
            return il2cpp::create_object<app::GameStateMachine_State__Enum>(get_class());
        }
    } // namespace GameStateMachine_State__Enum
} // namespace app::classes::types
