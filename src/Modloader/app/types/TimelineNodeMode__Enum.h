#pragma once
#include <Modloader/app/structs/TimelineNodeMode__Enum.h>
#include <Modloader/app/structs/TimelineNodeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineNodeMode__Enum {
        inline app::TimelineNodeMode__Enum__Class** type_info() {
            static app::TimelineNodeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineNodeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineNodeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimelineNodeMode__Enum__Class>(type_info(), "Moon.InteractionGraph", "TimelineNodeMode");
        }
        inline app::TimelineNodeMode__Enum* create() {
            return il2cpp::create_object<app::TimelineNodeMode__Enum>(get_class());
        }
    } // namespace TimelineNodeMode__Enum
} // namespace app::classes::types
