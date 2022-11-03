#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameStateMachine {
        inline app::GameStateMachine__Class** type_info = (app::GameStateMachine__Class**)(modloader::win::memory::resolve_rva(0x04787158));
        inline app::GameStateMachine__Class* get_class() {
            return il2cpp::get_class<app::GameStateMachine__Class>(type_info, "", "GameStateMachine");
        }
        inline app::GameStateMachine* create() {
            return il2cpp::create_object<app::GameStateMachine>(get_class());
        }
    } // namespace GameStateMachine
} // namespace app::classes::types
