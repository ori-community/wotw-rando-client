#pragma once
#include <Modloader/app/structs/SpiderBossAttackCallMinions_DelayedSpawnInfo.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions_DelayedSpawnInfo__Array.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions_DelayedSpawnInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions_DelayedSpawnInfo {
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Class** type_info() {
            static app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Class**)(modloader::win::memory::resolve_rva(0x04762470));
            }
            return cache;
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Class>(type_info(), "", "SpiderBossAttackCallMinions", "DelayedSpawnInfo");
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions_DelayedSpawnInfo>(get_class());
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array>(get_class(), size);
        }
        inline app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array* create_array(const std::vector<app::SpiderBossAttackCallMinions_DelayedSpawnInfo*>& items) {
            return il2cpp::array_new<app::SpiderBossAttackCallMinions_DelayedSpawnInfo__Array>(get_class(), items);
        }
    } // namespace SpiderBossAttackCallMinions_DelayedSpawnInfo
} // namespace app::classes::types
