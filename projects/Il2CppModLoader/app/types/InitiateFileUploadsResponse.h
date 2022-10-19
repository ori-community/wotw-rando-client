#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitiateFileUploadsResponse {
        inline app::InitiateFileUploadsResponse__Class** type_info = (app::InitiateFileUploadsResponse__Class**)(modloader::win::memory::resolve_rva(0x047469B0));
        inline app::InitiateFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadsResponse__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadsResponse");
        }
        inline app::InitiateFileUploadsResponse* create() {
            return il2cpp::create_object<app::InitiateFileUploadsResponse>(get_class());
        }
    } // namespace InitiateFileUploadsResponse
} // namespace app::classes::types
