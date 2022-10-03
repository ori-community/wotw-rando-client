#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserPsnInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserPsnInfo__Class** type_info;
        inline app::UserPsnInfo__Class* get_class() {
            return il2cpp::get_class<app::UserPsnInfo__Class>(type_info, "PlayFab.ClientModels", "UserPsnInfo");
        }
        inline app::UserPsnInfo* create() {
            return il2cpp::create_object<app::UserPsnInfo>(get_class());
        }
    } // namespace UserPsnInfo
} // namespace app::classes::types
