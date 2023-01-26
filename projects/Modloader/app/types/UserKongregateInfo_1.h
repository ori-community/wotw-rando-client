#pragma once
#include <Modloader/app/structs/UserKongregateInfo_1.h>
#include <Modloader/app/structs/UserKongregateInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserKongregateInfo_1 {
        inline app::UserKongregateInfo_1__Class** type_info() {
            static app::UserKongregateInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserKongregateInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserKongregateInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserKongregateInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserKongregateInfo");
        }
        inline app::UserKongregateInfo_1* create() {
            return il2cpp::create_object<app::UserKongregateInfo_1>(get_class());
        }
    } // namespace UserKongregateInfo_1
} // namespace app::classes::types
