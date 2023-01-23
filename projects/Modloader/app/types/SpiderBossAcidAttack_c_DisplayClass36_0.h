#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_c_DisplayClass36_0__Class.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_c_DisplayClass36_0.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack_c_DisplayClass36_0 {
        inline app::SpiderBossAcidAttack_c_DisplayClass36_0__Class** type_info = (app::SpiderBossAcidAttack_c_DisplayClass36_0__Class**)(modloader::win::memory::resolve_rva(0x04716F50));
        inline app::SpiderBossAcidAttack_c_DisplayClass36_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossAcidAttack_c_DisplayClass36_0__Class>(type_info, "", "SpiderBossAcidAttack", "<>c__DisplayClass36_0");
        }
        inline app::SpiderBossAcidAttack_c_DisplayClass36_0* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack_c_DisplayClass36_0>(get_class());
        }
    } // namespace SpiderBossAcidAttack_c_DisplayClass36_0
} // namespace app::classes::types
