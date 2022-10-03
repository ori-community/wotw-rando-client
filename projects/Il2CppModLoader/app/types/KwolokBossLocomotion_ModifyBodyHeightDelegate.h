#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyBodyHeightDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class** type_info;
        inline app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class>(type_info, "", "KwolokBossLocomotion", "ModifyBodyHeightDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyBodyHeightDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyBodyHeightDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyBodyHeightDelegate
} // namespace app::classes::types
