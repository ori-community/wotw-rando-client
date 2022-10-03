#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceRunState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceRunState__Class** type_info;
        inline app::RaceRunState__Class* get_class() {
            return il2cpp::get_class<app::RaceRunState__Class>(type_info, "", "RaceRunState");
        }
        inline app::RaceRunState* create() {
            return il2cpp::create_object<app::RaceRunState>(get_class());
        }
    } // namespace RaceRunState
} // namespace app::classes::types
