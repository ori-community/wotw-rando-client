#pragma once
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Array.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet_LocationTimelineGroup__Array {
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class** type_info() {
            static app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class>(type_info(), "", "SpiderBossLocationTimelineSet+LocationTimelineGroup[]");
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array>(get_class());
        }
    } // namespace SpiderBossLocationTimelineSet_LocationTimelineGroup__Array
} // namespace app::classes::types
