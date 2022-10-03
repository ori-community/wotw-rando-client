#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_c__Class** type_info;
        inline app::KwolokBossLocomotion_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_c__Class>(type_info, "", "KwolokBossLocomotion", "<>c");
        }
        inline app::KwolokBossLocomotion_c* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_c>(get_class());
        }
    } // namespace KwolokBossLocomotion_c
} // namespace app::classes::types
