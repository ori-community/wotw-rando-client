#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet_LocationTimelineGroup__Array {
        namespace {
            inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class>(type_info, "", "SpiderBossLocationTimelineSet+LocationTimelineGroup[]");
        }
        inline app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet_LocationTimelineGroup__Array>(get_class());
        }
    } // namespace SpiderBossLocationTimelineSet_LocationTimelineGroup__Array
} // namespace app::classes::types
