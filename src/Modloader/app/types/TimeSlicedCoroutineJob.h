#pragma once
#include <Modloader/app/structs/TimeSlicedCoroutineJob.h>
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedCoroutineJob {
        inline app::TimeSlicedCoroutineJob__Class** type_info() {
            static app::TimeSlicedCoroutineJob__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedCoroutineJob__Class**)(modloader::win::memory::resolve_rva(0x04793818));
            }
            return cache;
        }
        inline app::TimeSlicedCoroutineJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedCoroutineJob__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedCoroutineJob");
        }
        inline app::TimeSlicedCoroutineJob* create() {
            return il2cpp::create_object<app::TimeSlicedCoroutineJob>(get_class());
        }
    } // namespace TimeSlicedCoroutineJob
} // namespace app::classes::types
