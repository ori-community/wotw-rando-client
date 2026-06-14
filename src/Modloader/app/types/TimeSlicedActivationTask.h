#pragma once
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#include <Modloader/app/structs/TimeSlicedActivationTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask {
        inline app::TimeSlicedActivationTask__Class** type_info() {
            static app::TimeSlicedActivationTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedActivationTask__Class**)(modloader::win::memory::resolve_rva(0x0474CD80));
            }
            return cache;
        }
        inline app::TimeSlicedActivationTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedActivationTask__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedActivationTask");
        }
        inline app::TimeSlicedActivationTask* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask>(get_class());
        }
    } // namespace TimeSlicedActivationTask
} // namespace app::classes::types
