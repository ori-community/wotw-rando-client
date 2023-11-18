#pragma once
#include <Modloader/app/structs/TimelineStartMode__Enum.h>
#include <Modloader/app/structs/TimelineStartMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineStartMode__Enum {
        inline app::TimelineStartMode__Enum__Class** type_info() {
            static app::TimelineStartMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineStartMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineStartMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimelineStartMode__Enum__Class>(type_info(), "Moon.Timeline", "TimelineStartMode");
        }
        inline app::TimelineStartMode__Enum* create() {
            return il2cpp::create_object<app::TimelineStartMode__Enum>(get_class());
        }
    } // namespace TimelineStartMode__Enum
} // namespace app::classes::types
