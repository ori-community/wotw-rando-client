#pragma once
#include <Modloader/app/structs/UserFacebookInfo_1.h>
#include <Modloader/app/structs/UserFacebookInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserFacebookInfo_1 {
        inline app::UserFacebookInfo_1__Class** type_info() {
            static app::UserFacebookInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserFacebookInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserFacebookInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserFacebookInfo");
        }
        inline app::UserFacebookInfo_1* create() {
            return il2cpp::create_object<app::UserFacebookInfo_1>(get_class());
        }
    } // namespace UserFacebookInfo_1
} // namespace app::classes::types
