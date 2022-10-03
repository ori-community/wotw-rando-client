#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabHttp_ApiProcessErrorEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabHttp_ApiProcessErrorEvent__Class** type_info;
        inline app::PlayFabHttp_ApiProcessErrorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabHttp_ApiProcessErrorEvent__Class>(type_info, "PlayFab.Internal", "PlayFabHttp", "ApiProcessErrorEvent");
        }
        inline app::PlayFabHttp_ApiProcessErrorEvent* create() {
            return il2cpp::create_object<app::PlayFabHttp_ApiProcessErrorEvent>(get_class());
        }
    } // namespace PlayFabHttp_ApiProcessErrorEvent
} // namespace app::classes::types
