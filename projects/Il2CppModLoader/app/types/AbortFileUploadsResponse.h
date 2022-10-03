#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbortFileUploadsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbortFileUploadsResponse__Class** type_info;
        inline app::AbortFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::AbortFileUploadsResponse__Class>(type_info, "PlayFab.DataModels", "AbortFileUploadsResponse");
        }
        inline app::AbortFileUploadsResponse* create() {
            return il2cpp::create_object<app::AbortFileUploadsResponse>(get_class());
        }
    } // namespace AbortFileUploadsResponse
} // namespace app::classes::types
