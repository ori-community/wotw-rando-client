#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IState {
        inline app::IState__Class** type_info = (app::IState__Class**)(modloader::win::memory::resolve_rva(0x0473E340));
        inline app::IState__Class* get_class() {
            return il2cpp::get_class<app::IState__Class>(type_info, "Moon.FSM", "IState");
        }
    } // namespace IState
} // namespace app::classes::types
