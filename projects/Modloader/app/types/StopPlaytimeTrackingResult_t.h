#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StopPlaytimeTrackingResult_t__Class.h>
#include <Modloader/app/structs/StopPlaytimeTrackingResult_t.h>
#include <Modloader/app/structs/StopPlaytimeTrackingResult_t__Boxed.h>

namespace app::classes::types {
    namespace StopPlaytimeTrackingResult_t {
        namespace {
            inline app::StopPlaytimeTrackingResult_t__Class* type_info_ref = nullptr;
        }
        inline app::StopPlaytimeTrackingResult_t__Class** type_info = &type_info_ref;
        inline app::StopPlaytimeTrackingResult_t__Class* get_class() {
            return il2cpp::get_class<app::StopPlaytimeTrackingResult_t__Class>(type_info, "Steamworks", "StopPlaytimeTrackingResult_t");
        }
        inline app::StopPlaytimeTrackingResult_t* create() {
            return il2cpp::create_object<app::StopPlaytimeTrackingResult_t>(get_class());
        }
        inline app::StopPlaytimeTrackingResult_t__Boxed* box(app::StopPlaytimeTrackingResult_t value) {
            return il2cpp::box_value<app::StopPlaytimeTrackingResult_t__Boxed>(get_class(), value);
        }
    } // namespace StopPlaytimeTrackingResult_t
} // namespace app::classes::types
