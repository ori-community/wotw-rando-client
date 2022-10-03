#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceCountdownState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceCountdownState__Class** type_info;
        inline app::RaceCountdownState__Class* get_class() {
            return il2cpp::get_class<app::RaceCountdownState__Class>(type_info, "", "RaceCountdownState");
        }
        inline app::RaceCountdownState* create() {
            return il2cpp::create_object<app::RaceCountdownState>(get_class());
        }
    } // namespace RaceCountdownState
} // namespace app::classes::types
