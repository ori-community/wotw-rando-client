#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInterruptable {
        inline app::IInterruptable__Class** type_info = (app::IInterruptable__Class**)(modloader::win::memory::resolve_rva(0x04786B08));
        inline app::IInterruptable__Class* get_class() {
            return il2cpp::get_class<app::IInterruptable__Class>(type_info, "Moon.FSM", "IInterruptable");
        }
    } // namespace IInterruptable
} // namespace app::classes::types
