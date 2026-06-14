#pragma once
#include <Modloader/app/structs/TimelineStateCondition.h>
#include <Modloader/app/structs/TimelineStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineStateCondition {
        inline app::TimelineStateCondition__Class** type_info() {
            static app::TimelineStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineStateCondition__Class>(type_info(), "", "TimelineStateCondition");
        }
        inline app::TimelineStateCondition* create() {
            return il2cpp::create_object<app::TimelineStateCondition>(get_class());
        }
    } // namespace TimelineStateCondition
} // namespace app::classes::types
