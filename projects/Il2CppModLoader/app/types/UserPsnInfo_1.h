#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserPsnInfo_1 {
        namespace {
            app::UserPsnInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserPsnInfo_1__Class** type_info = &type_info_ref;
        inline app::UserPsnInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserPsnInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserPsnInfo");
        }
        inline app::UserPsnInfo_1* create() {
            return il2cpp::create_object<app::UserPsnInfo_1>(get_class());
        }
    } // namespace UserPsnInfo_1
} // namespace app::classes::types
