#pragma once
#include <Modloader/app/structs/TimeSlicedRigidbodyTask.h>
#include <Modloader/app/structs/TimeSlicedRigidbodyTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedRigidbodyTask {
        inline app::TimeSlicedRigidbodyTask__Class** type_info() {
            static app::TimeSlicedRigidbodyTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedRigidbodyTask__Class**)(modloader::win::memory::resolve_rva(0x047397A8));
            }
            return cache;
        }
        inline app::TimeSlicedRigidbodyTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedRigidbodyTask__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedRigidbodyTask");
        }
        inline app::TimeSlicedRigidbodyTask* create() {
            return il2cpp::create_object<app::TimeSlicedRigidbodyTask>(get_class());
        }
    } // namespace TimeSlicedRigidbodyTask
} // namespace app::classes::types
