#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitiateFileUploadsRequest {
        inline app::InitiateFileUploadsRequest__Class** type_info = (app::InitiateFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x047116B8));
        inline app::InitiateFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadsRequest__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadsRequest");
        }
        inline app::InitiateFileUploadsRequest* create() {
            return il2cpp::create_object<app::InitiateFileUploadsRequest>(get_class());
        }
    } // namespace InitiateFileUploadsRequest
} // namespace app::classes::types
