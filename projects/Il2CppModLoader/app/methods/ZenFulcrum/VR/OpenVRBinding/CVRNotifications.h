#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRNotifications {
    IL2CPP_REGISTER_METHOD(0x016788C0, void, ctor, (app::CVRNotifications * this_ptr, void * p_interface))
    IL2CPP_REGISTER_METHOD(0x016789E0, app::EVRNotificationError__Enum, CreateNotification, (app::CVRNotifications * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_user_value, app::EVRNotificationType__Enum type, app::String * pch_text, app::EVRNotificationStyle__Enum style, app::NotificationBitmap_t * p_image, uint32_t * p_notification_id))
    IL2CPP_REGISTER_METHOD(0x01678A20, app::EVRNotificationError__Enum, RemoveNotification, (app::CVRNotifications * this_ptr, uint32_t notification_id))
}
