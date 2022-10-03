#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedCoroutineJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedCoroutineJob__Class** type_info;
        inline app::TimeSlicedCoroutineJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedCoroutineJob__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedCoroutineJob");
        }
        inline app::TimeSlicedCoroutineJob* create() {
            return il2cpp::create_object<app::TimeSlicedCoroutineJob>(get_class());
        }
    } // namespace TimeSlicedCoroutineJob
} // namespace app::classes::types
