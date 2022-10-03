#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineSet {
        namespace {
            app::SpiderBossLocationTimelineSet__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationTimelineSet__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineSet__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineSet__Class>(type_info, "", "SpiderBossLocationTimelineSet");
        }
        inline app::SpiderBossLocationTimelineSet* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineSet>(get_class());
        }
    } // namespace SpiderBossLocationTimelineSet
} // namespace app::classes::types
