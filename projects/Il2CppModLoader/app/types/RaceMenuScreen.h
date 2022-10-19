#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreen {
        inline app::RaceMenuScreen__Class** type_info = (app::RaceMenuScreen__Class**)(modloader::win::memory::resolve_rva(0x0478CBF8));
        inline app::RaceMenuScreen__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreen__Class>(type_info, "", "RaceMenuScreen");
        }
        inline app::RaceMenuScreen* create() {
            return il2cpp::create_object<app::RaceMenuScreen>(get_class());
        }
    } // namespace RaceMenuScreen
} // namespace app::classes::types
