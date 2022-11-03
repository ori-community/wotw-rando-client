#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions_DelayedSpawnInfo__Array {
        namespace {
            inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class>(type_info, "", "SpiderBossAttackCallMinions+DelayedSpawnInfo[]");
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array>(get_class());
        }
    } // namespace SpiderBossAttackCallMinions_DelayedSpawnInfo__Array
} // namespace app::classes::types
