#pragma once
#include <Modloader/app/structs/TimeSliceSystem.h>
#include <Modloader/app/structs/TimeSliceSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSliceSystem {
        inline app::TimeSliceSystem__Class** type_info() {
            static app::TimeSliceSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSliceSystem__Class**)(modloader::win::memory::resolve_rva(0x0475CD80));
            }
            return cache;
        }
        inline app::TimeSliceSystem__Class* get_class() {
            return il2cpp::get_class<app::TimeSliceSystem__Class>(type_info(), "Moon.TimeSlicer", "TimeSliceSystem");
        }
        inline app::TimeSliceSystem* create() {
            return il2cpp::create_object<app::TimeSliceSystem>(get_class());
        }
    } // namespace TimeSliceSystem
} // namespace app::classes::types
