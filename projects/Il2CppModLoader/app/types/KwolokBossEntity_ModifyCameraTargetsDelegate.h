#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyCameraTargetsDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class** type_info;
        inline app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyCameraTargetsDelegate");
        }
        inline app::KwolokBossEntity_ModifyCameraTargetsDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyCameraTargetsDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyCameraTargetsDelegate
} // namespace app::classes::types
