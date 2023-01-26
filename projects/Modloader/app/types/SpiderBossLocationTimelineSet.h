#pragma once
#include <Modloader/app/structs/SpiderBossLocationTimelineSet.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet {
        inline app::SpiderBossLocationTimelineSet__Class** type_info() {
            static app::SpiderBossLocationTimelineSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTimelineSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTimelineSet__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineSet__Class>(type_info(), "", "SpiderBossLocationTimelineSet");
        }
        inline app::SpiderBossLocationTimelineSet* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet>(get_class());
        }
    } // namespace SpiderBossLocationTimelineSet
} // namespace app::classes::types
