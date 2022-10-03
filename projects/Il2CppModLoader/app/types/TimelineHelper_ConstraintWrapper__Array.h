#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper_ConstraintWrapper__Array {
        namespace {
            app::TimelineHelper_ConstraintWrapper__Array__Class* type_info_ref = nullptr;
        }
        app::TimelineHelper_ConstraintWrapper__Array__Class** type_info = &type_info_ref;
        inline app::TimelineHelper_ConstraintWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineHelper_ConstraintWrapper__Array__Class>(type_info, "Moon.Timeline", "TimelineHelper+ConstraintWrapper[]");
        }
        inline app::TimelineHelper_ConstraintWrapper__Array* create() {
            return il2cpp::create_object<app::TimelineHelper_ConstraintWrapper__Array>(get_class());
        }
    } // namespace TimelineHelper_ConstraintWrapper__Array
} // namespace app::classes::types
