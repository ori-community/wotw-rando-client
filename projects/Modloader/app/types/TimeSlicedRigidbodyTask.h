#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSlicedRigidbodyTask__Class.h>
#include <Modloader/app/structs/TimeSlicedRigidbodyTask.h>

namespace app::classes::types {
    namespace TimeSlicedRigidbodyTask {
        inline app::TimeSlicedRigidbodyTask__Class** type_info = (app::TimeSlicedRigidbodyTask__Class**)(modloader::win::memory::resolve_rva(0x047397A8));
        inline app::TimeSlicedRigidbodyTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedRigidbodyTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedRigidbodyTask");
        }
        inline app::TimeSlicedRigidbodyTask* create() {
            return il2cpp::create_object<app::TimeSlicedRigidbodyTask>(get_class());
        }
    } // namespace TimeSlicedRigidbodyTask
} // namespace app::classes::types
