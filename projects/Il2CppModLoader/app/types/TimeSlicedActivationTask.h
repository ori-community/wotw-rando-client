#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedActivationTask__Class** type_info;
        inline app::TimeSlicedActivationTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedActivationTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedActivationTask");
        }
        inline app::TimeSlicedActivationTask* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask>(get_class());
        }
    } // namespace TimeSlicedActivationTask
} // namespace app::classes::types
