#pragma once
#include <Modloader/app/structs/UserPrivateAccountInfo_1.h>
#include <Modloader/app/structs/UserPrivateAccountInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserPrivateAccountInfo_1 {
        inline app::UserPrivateAccountInfo_1__Class** type_info() {
            static app::UserPrivateAccountInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserPrivateAccountInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserPrivateAccountInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserPrivateAccountInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserPrivateAccountInfo");
        }
        inline app::UserPrivateAccountInfo_1* create() {
            return il2cpp::create_object<app::UserPrivateAccountInfo_1>(get_class());
        }
    } // namespace UserPrivateAccountInfo_1
} // namespace app::classes::types
