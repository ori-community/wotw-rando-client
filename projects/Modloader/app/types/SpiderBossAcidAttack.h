#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossAcidAttack__Class.h>
#include <Modloader/app/structs/SpiderBossAcidAttack.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack {
        namespace {
            inline app::SpiderBossAcidAttack__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossAcidAttack__Class** type_info = &type_info_ref;
        inline app::SpiderBossAcidAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAcidAttack__Class>(type_info, "", "SpiderBossAcidAttack");
        }
        inline app::SpiderBossAcidAttack* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack>(get_class());
        }
    } // namespace SpiderBossAcidAttack
} // namespace app::classes::types
