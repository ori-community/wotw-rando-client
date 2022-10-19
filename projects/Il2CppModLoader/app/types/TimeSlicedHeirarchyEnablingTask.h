#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedHeirarchyEnablingTask {
        inline app::TimeSlicedHeirarchyEnablingTask__Class** type_info = (app::TimeSlicedHeirarchyEnablingTask__Class**)(modloader::win::memory::resolve_rva(0x04713BF0));
        inline app::TimeSlicedHeirarchyEnablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHeirarchyEnablingTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHeirarchyEnablingTask");
        }
        inline app::TimeSlicedHeirarchyEnablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHeirarchyEnablingTask>(get_class());
        }
    } // namespace TimeSlicedHeirarchyEnablingTask
} // namespace app::classes::types
