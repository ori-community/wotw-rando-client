#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PushNotificationPackage {
        namespace {
            inline app::PushNotificationPackage__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationPackage__Class** type_info = &type_info_ref;
        inline app::PushNotificationPackage__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPackage__Class>(type_info, "PlayFab.ServerModels", "PushNotificationPackage");
        }
        inline app::PushNotificationPackage* create() {
            return il2cpp::create_object<app::PushNotificationPackage>(get_class());
        }
    } // namespace PushNotificationPackage
} // namespace app::classes::types
