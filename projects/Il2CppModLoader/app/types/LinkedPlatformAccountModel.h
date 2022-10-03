#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkedPlatformAccountModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkedPlatformAccountModel__Class** type_info;
        inline app::LinkedPlatformAccountModel__Class* get_class() {
            return il2cpp::get_class<app::LinkedPlatformAccountModel__Class>(type_info, "PlayFab.ClientModels", "LinkedPlatformAccountModel");
        }
        inline app::LinkedPlatformAccountModel* create() {
            return il2cpp::create_object<app::LinkedPlatformAccountModel>(get_class());
        }
        inline app::LinkedPlatformAccountModel__Array* create_array(int size) {
            return il2cpp::array_new<app::LinkedPlatformAccountModel__Array>(get_class(), size);
        }
    } // namespace LinkedPlatformAccountModel
} // namespace app::classes::types
