#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity_OnDamageReceivedDelegate {
        inline app::KwolokBossEntity_OnDamageReceivedDelegate__Class** type_info = (app::KwolokBossEntity_OnDamageReceivedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472F2C0));
        inline app::KwolokBossEntity_OnDamageReceivedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_OnDamageReceivedDelegate__Class>(type_info, "", "KwolokBossEntity", "OnDamageReceivedDelegate");
        }
        inline app::KwolokBossEntity_OnDamageReceivedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_OnDamageReceivedDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_OnDamageReceivedDelegate
} // namespace app::classes::types
