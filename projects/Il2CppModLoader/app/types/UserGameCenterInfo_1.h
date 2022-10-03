#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserGameCenterInfo_1 {
        namespace {
            app::UserGameCenterInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserGameCenterInfo_1__Class** type_info = &type_info_ref;
        inline app::UserGameCenterInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo_1* create() {
            return il2cpp::create_object<app::UserGameCenterInfo_1>(get_class());
        }
    } // namespace UserGameCenterInfo_1
} // namespace app::classes::types
