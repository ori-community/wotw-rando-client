#pragma once
#include <Modloader/app/structs/ScheduleMode__Enum.h>
#include <Modloader/app/structs/ScheduleMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScheduleMode__Enum {
        inline app::ScheduleMode__Enum__Class** type_info() {
            static app::ScheduleMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScheduleMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScheduleMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScheduleMode__Enum__Class>(type_info(), "Unity.Jobs.LowLevel.Unsafe", "ScheduleMode");
        }
        inline app::ScheduleMode__Enum* create() {
            return il2cpp::create_object<app::ScheduleMode__Enum>(get_class());
        }
    } // namespace ScheduleMode__Enum
} // namespace app::classes::types
