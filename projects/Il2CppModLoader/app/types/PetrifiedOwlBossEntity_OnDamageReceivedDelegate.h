#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_OnDamageReceivedDelegate {
        inline app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class** type_info = (app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472D868));
        inline app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class>(type_info, "", "PetrifiedOwlBossEntity", "OnDamageReceivedDelegate");
        }
        inline app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_OnDamageReceivedDelegate
} // namespace app::classes::types
