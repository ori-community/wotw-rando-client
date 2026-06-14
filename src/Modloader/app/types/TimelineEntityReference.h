#pragma once
#include <Modloader/app/structs/TimelineEntityReference.h>
#include <Modloader/app/structs/TimelineEntityReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityReference {
        inline app::TimelineEntityReference__Class** type_info() {
            static app::TimelineEntityReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntityReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntityReference__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityReference__Class>(type_info(), "Moon.Timeline", "TimelineEntityReference");
        }
        inline app::TimelineEntityReference* create() {
            return il2cpp::create_object<app::TimelineEntityReference>(get_class());
        }
    } // namespace TimelineEntityReference
} // namespace app::classes::types
