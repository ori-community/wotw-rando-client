#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotificationBitmap_t {
        inline app::NotificationBitmap_t__Class** type_info = (app::NotificationBitmap_t__Class**)(modloader::win::memory::resolve_rva(0x0478D530));
        inline app::NotificationBitmap_t__Class* get_class() {
            return il2cpp::get_class<app::NotificationBitmap_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "NotificationBitmap_t");
        }
        inline app::NotificationBitmap_t* create() {
            return il2cpp::create_object<app::NotificationBitmap_t>(get_class());
        }
        inline app::NotificationBitmap_t__Boxed* box(app::NotificationBitmap_t value) {
            return il2cpp::box_value<app::NotificationBitmap_t__Boxed>(get_class(), value);
        }
    } // namespace NotificationBitmap_t
} // namespace app::classes::types
