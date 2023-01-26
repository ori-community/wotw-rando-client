#pragma once
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars.h>
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars__Array.h>
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars__Boxed.h>
#include <Modloader/app/structs/SpiderBatEntityReactions_UninterruptableTimelineVars__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntityReactions_UninterruptableTimelineVars {
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class** type_info() {
            static app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class>(type_info(), "", "SpiderBatEntityReactions", "UninterruptableTimelineVars");
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars* create() {
            return il2cpp::create_object<app::SpiderBatEntityReactions_UninterruptableTimelineVars>(get_class());
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Boxed* box(app::SpiderBatEntityReactions_UninterruptableTimelineVars value) {
            return il2cpp::box_value<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Boxed>(get_class(), value);
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array>(get_class(), size);
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array* create_array(const std::vector<app::SpiderBatEntityReactions_UninterruptableTimelineVars>& items) {
            return il2cpp::array_new<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Array>(get_class(), items);
        }
    } // namespace SpiderBatEntityReactions_UninterruptableTimelineVars
} // namespace app::classes::types
