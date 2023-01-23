#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Array__Class.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Array.h>

namespace app::classes::types {
    namespace TimelineHelper_ConstraintWrapper__Array {
        namespace {
            inline app::TimelineHelper_ConstraintWrapper__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimelineHelper_ConstraintWrapper__Array__Class** type_info = &type_info_ref;
        inline app::TimelineHelper_ConstraintWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineHelper_ConstraintWrapper__Array__Class>(type_info, "Moon.Timeline", "TimelineHelper+ConstraintWrapper[]");
        }
        inline app::TimelineHelper_ConstraintWrapper__Array* create() {
            return il2cpp::create_object<app::TimelineHelper_ConstraintWrapper__Array>(get_class());
        }
    } // namespace TimelineHelper_ConstraintWrapper__Array
} // namespace app::classes::types
