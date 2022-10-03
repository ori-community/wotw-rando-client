#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabUnityHttp {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabUnityHttp__Class** type_info;
        inline app::PlayFabUnityHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUnityHttp__Class>(type_info, "PlayFab.Internal", "PlayFabUnityHttp");
        }
        inline app::PlayFabUnityHttp* create() {
            return il2cpp::create_object<app::PlayFabUnityHttp>(get_class());
        }
    } // namespace PlayFabUnityHttp
} // namespace app::classes::types
