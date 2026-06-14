#pragma once
#include <Modloader/app/structs/UserGameCenterInfo_1.h>
#include <Modloader/app/structs/UserGameCenterInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserGameCenterInfo_1 {
        inline app::UserGameCenterInfo_1__Class** type_info() {
            static app::UserGameCenterInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserGameCenterInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserGameCenterInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo_1* create() {
            return il2cpp::create_object<app::UserGameCenterInfo_1>(get_class());
        }
    } // namespace UserGameCenterInfo_1
} // namespace app::classes::types
