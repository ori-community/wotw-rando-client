#pragma once
#include <Modloader/app/structs/UserTitleInfo_1.h>
#include <Modloader/app/structs/UserTitleInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserTitleInfo_1 {
        inline app::UserTitleInfo_1__Class** type_info() {
            static app::UserTitleInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserTitleInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserTitleInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserTitleInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserTitleInfo");
        }
        inline app::UserTitleInfo_1* create() {
            return il2cpp::create_object<app::UserTitleInfo_1>(get_class());
        }
    } // namespace UserTitleInfo_1
} // namespace app::classes::types
