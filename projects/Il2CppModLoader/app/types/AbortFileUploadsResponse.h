#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbortFileUploadsResponse {
        inline app::AbortFileUploadsResponse__Class** type_info = (app::AbortFileUploadsResponse__Class**)(modloader::win::memory::resolve_rva(0x04730E60));
        inline app::AbortFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::AbortFileUploadsResponse__Class>(type_info, "PlayFab.DataModels", "AbortFileUploadsResponse");
        }
        inline app::AbortFileUploadsResponse* create() {
            return il2cpp::create_object<app::AbortFileUploadsResponse>(get_class());
        }
    } // namespace AbortFileUploadsResponse
} // namespace app::classes::types
