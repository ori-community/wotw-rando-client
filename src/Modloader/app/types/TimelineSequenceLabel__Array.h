#pragma once
#include <Modloader/app/structs/TimelineSequenceLabel__Array.h>
#include <Modloader/app/structs/TimelineSequenceLabel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineSequenceLabel__Array {
        inline app::TimelineSequenceLabel__Array__Class** type_info() {
            static app::TimelineSequenceLabel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineSequenceLabel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineSequenceLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineSequenceLabel__Array__Class>(type_info(), "", "TimelineSequenceLabel[]");
        }
        inline app::TimelineSequenceLabel__Array* create() {
            return il2cpp::create_object<app::TimelineSequenceLabel__Array>(get_class());
        }
    } // namespace TimelineSequenceLabel__Array
} // namespace app::classes::types
