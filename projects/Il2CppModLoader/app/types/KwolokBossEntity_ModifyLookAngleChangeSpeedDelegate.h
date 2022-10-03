#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class** type_info;
        inline app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyLookAngleChangeSpeedDelegate");
        }
        inline app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate
} // namespace app::classes::types
