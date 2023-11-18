#pragma once
#include <Modloader/app/structs/SpiderBossBehaviourSelector.h>
#include <Modloader/app/structs/SpiderBossBehaviourSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourSelector {
        inline app::SpiderBossBehaviourSelector__Class** type_info() {
            static app::SpiderBossBehaviourSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBehaviourSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBehaviourSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourSelector__Class>(type_info(), "", "SpiderBossBehaviourSelector");
        }
        inline app::SpiderBossBehaviourSelector* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourSelector>(get_class());
        }
    } // namespace SpiderBossBehaviourSelector
} // namespace app::classes::types
