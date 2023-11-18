#pragma once
#include <Modloader/app/structs/TimelineEntityStateCondition.h>
#include <Modloader/app/structs/TimelineEntityStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityStateCondition {
        inline app::TimelineEntityStateCondition__Class** type_info() {
            static app::TimelineEntityStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntityStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntityStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityStateCondition__Class>(type_info(), "", "TimelineEntityStateCondition");
        }
        inline app::TimelineEntityStateCondition* create() {
            return il2cpp::create_object<app::TimelineEntityStateCondition>(get_class());
        }
    } // namespace TimelineEntityStateCondition
} // namespace app::classes::types
