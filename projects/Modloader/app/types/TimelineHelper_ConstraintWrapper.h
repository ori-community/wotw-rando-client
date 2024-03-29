#pragma once
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Array.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Boxed.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper_ConstraintWrapper {
        inline app::TimelineHelper_ConstraintWrapper__Class** type_info() {
            static app::TimelineHelper_ConstraintWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineHelper_ConstraintWrapper__Class**)(modloader::win::memory::resolve_rva(0x04789DD8));
            }
            return cache;
        }
        inline app::TimelineHelper_ConstraintWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineHelper_ConstraintWrapper__Class>(type_info(), "Moon.Timeline", "TimelineHelper", "ConstraintWrapper");
        }
        inline app::TimelineHelper_ConstraintWrapper* create() {
            return il2cpp::create_object<app::TimelineHelper_ConstraintWrapper>(get_class());
        }
        inline app::TimelineHelper_ConstraintWrapper__Boxed* box(app::TimelineHelper_ConstraintWrapper value) {
            return il2cpp::box_value<app::TimelineHelper_ConstraintWrapper__Boxed>(get_class(), value);
        }
        inline app::TimelineHelper_ConstraintWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineHelper_ConstraintWrapper__Array>(get_class(), size);
        }
        inline app::TimelineHelper_ConstraintWrapper__Array* create_array(const std::vector<app::TimelineHelper_ConstraintWrapper>& items) {
            return il2cpp::array_new<app::TimelineHelper_ConstraintWrapper__Array>(get_class(), items);
        }
    } // namespace TimelineHelper_ConstraintWrapper
} // namespace app::classes::types
