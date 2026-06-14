#pragma once
#include <Modloader/app/structs/TimelineEntity__Array.h>
#include <Modloader/app/structs/TimelineEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntity__Array {
        inline app::TimelineEntity__Array__Class** type_info() {
            static app::TimelineEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntity__Array__Class>(type_info(), "Moon.Timeline", "TimelineEntity[]");
        }
        inline app::TimelineEntity__Array* create() {
            return il2cpp::create_object<app::TimelineEntity__Array>(get_class());
        }
    } // namespace TimelineEntity__Array
} // namespace app::classes::types
