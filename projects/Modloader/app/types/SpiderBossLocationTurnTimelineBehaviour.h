#pragma once
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurnTimelineBehaviour {
        inline app::SpiderBossLocationTurnTimelineBehaviour__Class** type_info() {
            static app::SpiderBossLocationTurnTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTurnTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTurnTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurnTimelineBehaviour__Class>(type_info(), "", "SpiderBossLocationTurnTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurnTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurnTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurnTimelineBehaviour
} // namespace app::classes::types
