#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuRaceState {
        inline app::MenuRaceState__Class** type_info = (app::MenuRaceState__Class**)(modloader::win::memory::resolve_rva(0x0475F210));
        inline app::MenuRaceState__Class* get_class() {
            return il2cpp::get_class<app::MenuRaceState__Class>(type_info, "", "MenuRaceState");
        }
        inline app::MenuRaceState* create() {
            return il2cpp::create_object<app::MenuRaceState>(get_class());
        }
    } // namespace MenuRaceState
} // namespace app::classes::types
