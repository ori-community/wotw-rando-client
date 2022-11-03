#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossTimelineBehaviourBase {
        namespace {
            inline app::SpiderBossTimelineBehaviourBase__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossTimelineBehaviourBase__Class** type_info = &type_info_ref;
        inline app::SpiderBossTimelineBehaviourBase__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTimelineBehaviourBase__Class>(type_info, "", "SpiderBossTimelineBehaviourBase");
        }
        inline app::SpiderBossTimelineBehaviourBase* create() {
            return il2cpp::create_object<app::SpiderBossTimelineBehaviourBase>(get_class());
        }
    } // namespace SpiderBossTimelineBehaviourBase
} // namespace app::classes::types
