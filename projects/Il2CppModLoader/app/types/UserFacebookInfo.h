#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserFacebookInfo {
        inline app::UserFacebookInfo__Class** type_info = (app::UserFacebookInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B3D8));
        inline app::UserFacebookInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInfo__Class>(type_info, "PlayFab.ClientModels", "UserFacebookInfo");
        }
        inline app::UserFacebookInfo* create() {
            return il2cpp::create_object<app::UserFacebookInfo>(get_class());
        }
    } // namespace UserFacebookInfo
} // namespace app::classes::types
