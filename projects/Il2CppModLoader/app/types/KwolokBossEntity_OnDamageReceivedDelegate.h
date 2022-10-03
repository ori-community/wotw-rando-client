#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_OnDamageReceivedDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity_OnDamageReceivedDelegate__Class** type_info;
        inline app::KwolokBossEntity_OnDamageReceivedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_OnDamageReceivedDelegate__Class>(type_info, "", "KwolokBossEntity", "OnDamageReceivedDelegate");
        }
        inline app::KwolokBossEntity_OnDamageReceivedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_OnDamageReceivedDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_OnDamageReceivedDelegate
} // namespace app::classes::types
