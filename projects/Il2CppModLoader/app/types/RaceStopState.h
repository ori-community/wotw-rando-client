#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceStopState__Class** type_info;
        inline app::RaceStopState__Class* get_class() {
            return il2cpp::get_class<app::RaceStopState__Class>(type_info, "", "RaceStopState");
        }
        inline app::RaceStopState* create() {
            return il2cpp::create_object<app::RaceStopState>(get_class());
        }
    } // namespace RaceStopState
} // namespace app::classes::types
