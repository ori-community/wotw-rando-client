#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomTimelineConstraint {
        namespace {
            app::CustomTimelineConstraint__Class* type_info_ref = nullptr;
        }
        app::CustomTimelineConstraint__Class** type_info = &type_info_ref;
        inline app::CustomTimelineConstraint__Class* get_class() {
            return il2cpp::get_class<app::CustomTimelineConstraint__Class>(type_info, "Moon.Timeline", "CustomTimelineConstraint");
        }
        inline app::CustomTimelineConstraint* create() {
            return il2cpp::create_object<app::CustomTimelineConstraint>(get_class());
        }
    } // namespace CustomTimelineConstraint
} // namespace app::classes::types
