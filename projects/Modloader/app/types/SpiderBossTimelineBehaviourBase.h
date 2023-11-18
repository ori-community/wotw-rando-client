#pragma once
#include <Modloader/app/structs/SpiderBossTimelineBehaviourBase.h>
#include <Modloader/app/structs/SpiderBossTimelineBehaviourBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossTimelineBehaviourBase {
        inline app::SpiderBossTimelineBehaviourBase__Class** type_info() {
            static app::SpiderBossTimelineBehaviourBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossTimelineBehaviourBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossTimelineBehaviourBase__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTimelineBehaviourBase__Class>(type_info(), "", "SpiderBossTimelineBehaviourBase");
        }
        inline app::SpiderBossTimelineBehaviourBase* create() {
            return il2cpp::create_object<app::SpiderBossTimelineBehaviourBase>(get_class());
        }
    } // namespace SpiderBossTimelineBehaviourBase
} // namespace app::classes::types
