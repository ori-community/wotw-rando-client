#pragma once
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask.h>
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedHeirarchyEnablingTask {
        inline app::TimeSlicedHeirarchyEnablingTask__Class** type_info() {
            static app::TimeSlicedHeirarchyEnablingTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedHeirarchyEnablingTask__Class**)(modloader::win::memory::resolve_rva(0x04713BF0));
            }
            return cache;
        }
        inline app::TimeSlicedHeirarchyEnablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHeirarchyEnablingTask__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedHeirarchyEnablingTask");
        }
        inline app::TimeSlicedHeirarchyEnablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHeirarchyEnablingTask>(get_class());
        }
    } // namespace TimeSlicedHeirarchyEnablingTask
} // namespace app::classes::types
