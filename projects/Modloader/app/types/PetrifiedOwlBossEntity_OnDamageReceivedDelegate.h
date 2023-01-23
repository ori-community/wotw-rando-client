#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_OnDamageReceivedDelegate__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_OnDamageReceivedDelegate.h>

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
