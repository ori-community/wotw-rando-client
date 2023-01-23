#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReservationNotificationCallback_t__Class.h>
#include <Modloader/app/structs/ReservationNotificationCallback_t.h>
#include <Modloader/app/structs/ReservationNotificationCallback_t__Boxed.h>

namespace app::classes::types {
    namespace ReservationNotificationCallback_t {
        namespace {
            inline app::ReservationNotificationCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::ReservationNotificationCallback_t__Class** type_info = &type_info_ref;
        inline app::ReservationNotificationCallback_t__Class* get_class() {
            return il2cpp::get_class<app::ReservationNotificationCallback_t__Class>(type_info, "Steamworks", "ReservationNotificationCallback_t");
        }
        inline app::ReservationNotificationCallback_t* create() {
            return il2cpp::create_object<app::ReservationNotificationCallback_t>(get_class());
        }
        inline app::ReservationNotificationCallback_t__Boxed* box(app::ReservationNotificationCallback_t value) {
            return il2cpp::box_value<app::ReservationNotificationCallback_t__Boxed>(get_class(), value);
        }
    } // namespace ReservationNotificationCallback_t
} // namespace app::classes::types
