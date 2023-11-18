#pragma once
#include <Modloader/app/structs/UserTwitchInfo_1.h>
#include <Modloader/app/structs/UserTwitchInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserTwitchInfo_1 {
        inline app::UserTwitchInfo_1__Class** type_info() {
            static app::UserTwitchInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserTwitchInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserTwitchInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserTwitchInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserTwitchInfo");
        }
        inline app::UserTwitchInfo_1* create() {
            return il2cpp::create_object<app::UserTwitchInfo_1>(get_class());
        }
    } // namespace UserTwitchInfo_1
} // namespace app::classes::types
