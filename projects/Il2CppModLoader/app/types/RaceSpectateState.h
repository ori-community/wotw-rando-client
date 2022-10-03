#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceSpectateState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceSpectateState__Class** type_info;
        inline app::RaceSpectateState__Class* get_class() {
            return il2cpp::get_class<app::RaceSpectateState__Class>(type_info, "", "RaceSpectateState");
        }
        inline app::RaceSpectateState* create() {
            return il2cpp::create_object<app::RaceSpectateState>(get_class());
        }
    } // namespace RaceSpectateState
} // namespace app::classes::types
