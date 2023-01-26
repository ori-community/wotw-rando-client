#pragma once
#include <Modloader/app/structs/UserPsnInfo_1.h>
#include <Modloader/app/structs/UserPsnInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserPsnInfo_1 {
        inline app::UserPsnInfo_1__Class** type_info() {
            static app::UserPsnInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserPsnInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserPsnInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserPsnInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserPsnInfo");
        }
        inline app::UserPsnInfo_1* create() {
            return il2cpp::create_object<app::UserPsnInfo_1>(get_class());
        }
    } // namespace UserPsnInfo_1
} // namespace app::classes::types
