#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet_LocationTimelineGroup {
        namespace {
            app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Class>(type_info, "", "SpiderBossLocationTimelineSet", "LocationTimelineGroup");
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet_LocationTimelineGroup>(get_class());
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array>(get_class(), size);
        }
    } // namespace SpiderBossLocationTimelineSet_LocationTimelineGroup
} // namespace app::classes::types
