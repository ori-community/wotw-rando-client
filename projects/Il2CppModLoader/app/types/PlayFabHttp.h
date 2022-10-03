#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabHttp {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabHttp__Class** type_info;
        inline app::PlayFabHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabHttp__Class>(type_info, "PlayFab.Internal", "PlayFabHttp");
        }
        inline app::PlayFabHttp* create() {
            return il2cpp::create_object<app::PlayFabHttp>(get_class());
        }
    } // namespace PlayFabHttp
} // namespace app::classes::types
