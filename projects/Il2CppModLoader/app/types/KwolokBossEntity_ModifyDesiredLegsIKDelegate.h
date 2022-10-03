#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class** type_info;
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyDesiredLegsIKDelegate");
        }
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate
} // namespace app::classes::types
