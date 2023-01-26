#pragma once
#include <Modloader/app/structs/UserAndroidDeviceInfo.h>
#include <Modloader/app/structs/UserAndroidDeviceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAndroidDeviceInfo {
        inline app::UserAndroidDeviceInfo__Class** type_info() {
            static app::UserAndroidDeviceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserAndroidDeviceInfo__Class**)(modloader::win::memory::resolve_rva(0x04739928));
            }
            return cache;
        }
        inline app::UserAndroidDeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::UserAndroidDeviceInfo__Class>(type_info(), "PlayFab.ClientModels", "UserAndroidDeviceInfo");
        }
        inline app::UserAndroidDeviceInfo* create() {
            return il2cpp::create_object<app::UserAndroidDeviceInfo>(get_class());
        }
    } // namespace UserAndroidDeviceInfo
} // namespace app::classes::types
