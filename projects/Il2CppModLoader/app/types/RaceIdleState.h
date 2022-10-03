#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceIdleState__Class** type_info;
        inline app::RaceIdleState__Class* get_class() {
            return il2cpp::get_class<app::RaceIdleState__Class>(type_info, "", "RaceIdleState");
        }
        inline app::RaceIdleState* create() {
            return il2cpp::create_object<app::RaceIdleState>(get_class());
        }
    } // namespace RaceIdleState
} // namespace app::classes::types
