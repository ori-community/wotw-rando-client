#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUpdateable_1 {
        inline app::IUpdateable_1__Class** type_info = (app::IUpdateable_1__Class**)(modloader::win::memory::resolve_rva(0x04728E28));
        inline app::IUpdateable_1__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable_1__Class>(type_info, "Moon.FSM", "IUpdateable");
        }
    } // namespace IUpdateable_1
} // namespace app::classes::types
