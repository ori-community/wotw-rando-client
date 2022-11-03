#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossEntity_ExecuteAttackInfo__Array {
        namespace {
            inline app::SpiderBossEntity_ExecuteAttackInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity_ExecuteAttackInfo__Array__Class>(type_info, "", "SpiderBossEntity+ExecuteAttackInfo[]");
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array* create() {
            return il2cpp::create_object<app::SpiderBossEntity_ExecuteAttackInfo__Array>(get_class());
        }
    } // namespace SpiderBossEntity_ExecuteAttackInfo__Array
} // namespace app::classes::types
