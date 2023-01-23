#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossBehaviourSelector__Class.h>
#include <Modloader/app/structs/SpiderBossBehaviourSelector.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourSelector {
        namespace {
            inline app::SpiderBossBehaviourSelector__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossBehaviourSelector__Class** type_info = &type_info_ref;
        inline app::SpiderBossBehaviourSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourSelector__Class>(type_info, "", "SpiderBossBehaviourSelector");
        }
        inline app::SpiderBossBehaviourSelector* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourSelector>(get_class());
        }
    } // namespace SpiderBossBehaviourSelector
} // namespace app::classes::types
