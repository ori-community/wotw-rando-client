#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatEntityReactions_UninterruptableTimelineVars {
        namespace {
            inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class** type_info = &type_info_ref;
        inline app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntityReactions_UninterruptableTimelineVars__Class>(type_info, "", "SpiderBatEntityReactions", "UninterruptableTimelineVars");
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
