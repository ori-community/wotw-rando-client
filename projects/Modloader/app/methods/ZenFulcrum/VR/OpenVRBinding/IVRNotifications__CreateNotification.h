#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__CreateNotification {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRNotifications_CreateNotification * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D78590, app::EVRNotificationError__Enum, Invoke, (app::IVRNotifications_CreateNotification * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_user_value, app::EVRNotificationType__Enum type, app::String* pch_text, app::EVRNotificationStyle__Enum style, app::NotificationBitmap_t* p_image, uint32_t* p_notification_id))
    IL2CPP_REGISTER_METHOD(0x02D78B50, app::IAsyncResult*, BeginInvoke, (app::IVRNotifications_CreateNotification * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_user_value, app::EVRNotificationType__Enum type, app::String* pch_text, app::EVRNotificationStyle__Enum style, app::NotificationBitmap_t* p_image, uint32_t* p_notification_id, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVRNotificationError__Enum, EndInvoke, (app::IVRNotifications_CreateNotification * this_ptr, app::NotificationBitmap_t* p_image, uint32_t* p_notification_id, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__CreateNotification
