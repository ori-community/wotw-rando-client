#pragma once
#include <Modloader/app/structs/CustomTimelineConstraint.h>
#include <Modloader/app/structs/CustomTimelineConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomTimelineConstraint {
        inline app::CustomTimelineConstraint__Class** type_info() {
            static app::CustomTimelineConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomTimelineConstraint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomTimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::CustomTimelineConstraint__Class>(type_info(), "Moon.Timeline", "CustomTimelineConstraint");
        }
        inline app::CustomTimelineConstraint* create() {
            return il2cpp::create_object<app::CustomTimelineConstraint>(get_class());
        }
    } // namespace CustomTimelineConstraint
} // namespace app::classes::types
