#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FinalizeFileUploadsRequest {
        inline app::FinalizeFileUploadsRequest__Class** type_info = (app::FinalizeFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x04715E18));
        inline app::FinalizeFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::FinalizeFileUploadsRequest__Class>(type_info, "PlayFab.DataModels", "FinalizeFileUploadsRequest");
        }
        inline app::FinalizeFileUploadsRequest* create() {
            return il2cpp::create_object<app::FinalizeFileUploadsRequest>(get_class());
        }
    } // namespace FinalizeFileUploadsRequest
} // namespace app::classes::types
