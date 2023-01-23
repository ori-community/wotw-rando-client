#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Class.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet_LocationTimelineGroup__Array.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet_LocationTimelineGroup {
        namespace {
            inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class>(type_info, "", "SpiderBossLocationTimelineSet", "LocationTimelineGroup");
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
