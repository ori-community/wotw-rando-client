#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabLocalizationInstanceAPI {
        namespace {
            inline app::PlayFabLocalizationInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabLocalizationInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabLocalizationInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLocalizationInstanceAPI__Class>(type_info, "PlayFab", "PlayFabLocalizationInstanceAPI");
        }
        inline app::PlayFabLocalizationInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabLocalizationInstanceAPI>(get_class());
        }
    } // namespace PlayFabLocalizationInstanceAPI
} // namespace app::classes::types
