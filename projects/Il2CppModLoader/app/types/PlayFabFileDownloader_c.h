#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabFileDownloader_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabFileDownloader_c__Class** type_info;
        inline app::PlayFabFileDownloader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabFileDownloader_c__Class>(type_info, "SystemIntegration.Races", "PlayFabFileDownloader", "<>c");
        }
        inline app::PlayFabFileDownloader_c* create() {
            return il2cpp::create_object<app::PlayFabFileDownloader_c>(get_class());
        }
    } // namespace PlayFabFileDownloader_c
} // namespace app::classes::types
