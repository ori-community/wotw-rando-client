#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabRequestCommon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabRequestCommon__Class** type_info;
        inline app::PlayFabRequestCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRequestCommon__Class>(type_info, "PlayFab.SharedModels", "PlayFabRequestCommon");
        }
        inline app::PlayFabRequestCommon* create() {
            return il2cpp::create_object<app::PlayFabRequestCommon>(get_class());
        }
    } // namespace PlayFabRequestCommon
} // namespace app::classes::types
