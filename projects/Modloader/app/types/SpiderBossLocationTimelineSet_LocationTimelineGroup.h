#pragma once
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Array.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet_LocationTimelineGroup {
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class** type_info() {
            static app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class>(type_info(), "", "SpiderBossLocationTimelineSet", "LocationTimelineGroup");
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet_LocationTimelineGroup>(get_class());
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array>(get_class(), size);
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* create_array(const std::vector<app::SpiderBossLocationTimelineSet_LocationTimelineGroup*>& items) {
            return il2cpp::array_new<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array>(get_class(), items);
        }
    } // namespace SpiderBossLocationTimelineSet_LocationTimelineGroup
} // namespace app::classes::types
