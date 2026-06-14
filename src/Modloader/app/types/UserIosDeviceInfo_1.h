#pragma once
#include <Modloader/app/structs/UserIosDeviceInfo_1.h>
#include <Modloader/app/structs/UserIosDeviceInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserIosDeviceInfo_1 {
        inline app::UserIosDeviceInfo_1__Class** type_info() {
            static app::UserIosDeviceInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserIosDeviceInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserIosDeviceInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserIosDeviceInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserIosDeviceInfo");
        }
        inline app::UserIosDeviceInfo_1* create() {
            return il2cpp::create_object<app::UserIosDeviceInfo_1>(get_class());
        }
    } // namespace UserIosDeviceInfo_1
} // namespace app::classes::types
