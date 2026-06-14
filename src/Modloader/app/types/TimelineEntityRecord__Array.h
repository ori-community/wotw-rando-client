#pragma once
#include <Modloader/app/structs/TimelineEntityRecord__Array.h>
#include <Modloader/app/structs/TimelineEntityRecord__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord__Array {
        inline app::TimelineEntityRecord__Array__Class** type_info() {
            static app::TimelineEntityRecord__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntityRecord__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntityRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityRecord__Array__Class>(type_info(), "Moon.Timeline", "TimelineEntityRecord[]");
        }
        inline app::TimelineEntityRecord__Array* create() {
            return il2cpp::create_object<app::TimelineEntityRecord__Array>(get_class());
        }
    } // namespace TimelineEntityRecord__Array
} // namespace app::classes::types
