#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserKongregateInfo_1 {
        namespace {
            app::UserKongregateInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserKongregateInfo_1__Class** type_info = &type_info_ref;
        inline app::UserKongregateInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserKongregateInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserKongregateInfo");
        }
        inline app::UserKongregateInfo_1* create() {
            return il2cpp::create_object<app::UserKongregateInfo_1>(get_class());
        }
    } // namespace UserKongregateInfo_1
} // namespace app::classes::types
