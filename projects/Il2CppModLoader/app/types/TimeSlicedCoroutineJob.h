#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedCoroutineJob {
        inline app::TimeSlicedCoroutineJob__Class** type_info = (app::TimeSlicedCoroutineJob__Class**)(modloader::win::memory::resolve_rva(0x04793818));
        inline app::TimeSlicedCoroutineJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedCoroutineJob__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedCoroutineJob");
        }
        inline app::TimeSlicedCoroutineJob* create() {
            return il2cpp::create_object<app::TimeSlicedCoroutineJob>(get_class());
        }
    } // namespace TimeSlicedCoroutineJob
} // namespace app::classes::types
