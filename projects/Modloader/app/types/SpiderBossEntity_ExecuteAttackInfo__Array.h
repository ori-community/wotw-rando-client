#pragma once
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo__Array.h>
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_ExecuteAttackInfo__Array {
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array__Class** type_info() {
            static app::SpiderBossEntity_ExecuteAttackInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossEntity_ExecuteAttackInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity_ExecuteAttackInfo__Array__Class>(type_info(), "", "SpiderBossEntity+ExecuteAttackInfo[]");
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array* create() {
            return il2cpp::create_object<app::SpiderBossEntity_ExecuteAttackInfo__Array>(get_class());
        }
    } // namespace SpiderBossEntity_ExecuteAttackInfo__Array
} // namespace app::classes::types
