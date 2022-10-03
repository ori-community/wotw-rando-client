#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetContentDownloadUrlResult__Class** type_info;
        inline app::GetContentDownloadUrlResult__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlResult__Class>(type_info, "PlayFab.ClientModels", "GetContentDownloadUrlResult");
        }
        inline app::GetContentDownloadUrlResult* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlResult>(get_class());
        }
    } // namespace GetContentDownloadUrlResult
} // namespace app::classes::types
