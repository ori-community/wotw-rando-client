#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossEntity_ExecuteAttackInfo {
        inline app::SpiderBossEntity_ExecuteAttackInfo__Class** type_info = (app::SpiderBossEntity_ExecuteAttackInfo__Class**)(modloader::win::memory::resolve_rva(0x04704888));
        inline app::SpiderBossEntity_ExecuteAttackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_ExecuteAttackInfo__Class>(type_info, "", "SpiderBossEntity", "ExecuteAttackInfo");
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo* create() {
            return il2cpp::create_object<app::SpiderBossEntity_ExecuteAttackInfo>(get_class());
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossEntity_ExecuteAttackInfo__Array>(get_class(), size);
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array* create_array(const std::vector<app::SpiderBossEntity_ExecuteAttackInfo*>& items) {
            return il2cpp::array_new<app::SpiderBossEntity_ExecuteAttackInfo__Array>(get_class(), items);
        }
    } // namespace SpiderBossEntity_ExecuteAttackInfo
} // namespace app::classes::types
