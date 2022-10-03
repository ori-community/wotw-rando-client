#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedHeirarchyEnablingTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedHeirarchyEnablingTask__Class** type_info;
        inline app::TimeSlicedHeirarchyEnablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHeirarchyEnablingTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHeirarchyEnablingTask");
        }
        inline app::TimeSlicedHeirarchyEnablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHeirarchyEnablingTask>(get_class());
        }
    } // namespace TimeSlicedHeirarchyEnablingTask
} // namespace app::classes::types
