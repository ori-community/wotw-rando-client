#pragma once
#include <Modloader/app/structs/SpiderBossAttackCallMinions_DelayedSpawnInfo__Array.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions_DelayedSpawnInfo__Array {
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class** type_info() {
            static app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class>(type_info(), "", "SpiderBossAttackCallMinions+DelayedSpawnInfo[]");
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array>(get_class());
        }
    } // namespace SpiderBossAttackCallMinions_DelayedSpawnInfo__Array
} // namespace app::classes::types
