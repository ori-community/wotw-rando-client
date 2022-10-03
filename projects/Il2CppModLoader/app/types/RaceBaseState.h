#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceBaseState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceBaseState__Class** type_info;
        inline app::RaceBaseState__Class* get_class() {
            return il2cpp::get_class<app::RaceBaseState__Class>(type_info, "", "RaceBaseState");
        }
        inline app::RaceBaseState* create() {
            return il2cpp::create_object<app::RaceBaseState>(get_class());
        }
    } // namespace RaceBaseState
} // namespace app::classes::types
