#pragma once
#include <Modloader/app/structs/StartPlaytimeTrackingResult_t.h>
#include <Modloader/app/structs/StartPlaytimeTrackingResult_t__Boxed.h>
#include <Modloader/app/structs/StartPlaytimeTrackingResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartPlaytimeTrackingResult_t {
        inline app::StartPlaytimeTrackingResult_t__Class** type_info() {
            static app::StartPlaytimeTrackingResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StartPlaytimeTrackingResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StartPlaytimeTrackingResult_t__Class* get_class() {
            return il2cpp::get_class<app::StartPlaytimeTrackingResult_t__Class>(type_info(), "Steamworks", "StartPlaytimeTrackingResult_t");
        }
        inline app::StartPlaytimeTrackingResult_t* create() {
            return il2cpp::create_object<app::StartPlaytimeTrackingResult_t>(get_class());
        }
        inline app::StartPlaytimeTrackingResult_t__Boxed* box(app::StartPlaytimeTrackingResult_t value) {
            return il2cpp::box_value<app::StartPlaytimeTrackingResult_t__Boxed>(get_class(), value);
        }
    } // namespace StartPlaytimeTrackingResult_t
} // namespace app::classes::types
