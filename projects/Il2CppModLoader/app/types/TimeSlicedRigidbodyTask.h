#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedRigidbodyTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedRigidbodyTask__Class** type_info;
        inline app::TimeSlicedRigidbodyTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedRigidbodyTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedRigidbodyTask");
        }
        inline app::TimeSlicedRigidbodyTask* create() {
            return il2cpp::create_object<app::TimeSlicedRigidbodyTask>(get_class());
        }
    } // namespace TimeSlicedRigidbodyTask
} // namespace app::classes::types
