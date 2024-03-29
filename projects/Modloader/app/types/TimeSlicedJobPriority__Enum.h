#pragma once
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedJobPriority__Enum {
        inline app::TimeSlicedJobPriority__Enum__Class** type_info() {
            static app::TimeSlicedJobPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedJobPriority__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721AF0));
            }
            return cache;
        }
        inline app::TimeSlicedJobPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedJobPriority__Enum__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedJobPriority");
        }
        inline app::TimeSlicedJobPriority__Enum* create() {
            return il2cpp::create_object<app::TimeSlicedJobPriority__Enum>(get_class());
        }
    } // namespace TimeSlicedJobPriority__Enum
} // namespace app::classes::types
