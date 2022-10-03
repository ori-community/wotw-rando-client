#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceMenuScreen__Class** type_info;
        inline app::RaceMenuScreen__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreen__Class>(type_info, "", "RaceMenuScreen");
        }
        inline app::RaceMenuScreen* create() {
            return il2cpp::create_object<app::RaceMenuScreen>(get_class());
        }
    } // namespace RaceMenuScreen
} // namespace app::classes::types
