#pragma once
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars__Array.h>
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntityReactions_UninterruptableTimelineVars__Array {
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class** type_info() {
            static app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class>(type_info(), "", "SpiderBatEntityReactions+UninterruptableTimelineVars[]");
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array* create() {
            return il2cpp::create_object<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array>(get_class());
        }
    } // namespace SpiderBatEntityReactions_UninterruptableTimelineVars__Array
} // namespace app::classes::types
