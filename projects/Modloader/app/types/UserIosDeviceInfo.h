#pragma once
#include <Modloader/app/structs/UserIosDeviceInfo.h>
#include <Modloader/app/structs/UserIosDeviceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserIosDeviceInfo {
        inline app::UserIosDeviceInfo__Class** type_info() {
            static app::UserIosDeviceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserIosDeviceInfo__Class**)(modloader::win::memory::resolve_rva(0x04728600));
            }
            return cache;
        }
        inline app::UserIosDeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::UserIosDeviceInfo__Class>(type_info(), "PlayFab.ClientModels", "UserIosDeviceInfo");
        }
        inline app::UserIosDeviceInfo* create() {
            return il2cpp::create_object<app::UserIosDeviceInfo>(get_class());
        }
    } // namespace UserIosDeviceInfo
} // namespace app::classes::types
