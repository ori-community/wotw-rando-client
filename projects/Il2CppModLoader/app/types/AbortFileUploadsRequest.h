#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbortFileUploadsRequest {
        inline app::AbortFileUploadsRequest__Class** type_info = (app::AbortFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x04733BF8));
        inline app::AbortFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::AbortFileUploadsRequest__Class>(type_info, "PlayFab.DataModels", "AbortFileUploadsRequest");
        }
        inline app::AbortFileUploadsRequest* create() {
            return il2cpp::create_object<app::AbortFileUploadsRequest>(get_class());
        }
    } // namespace AbortFileUploadsRequest
} // namespace app::classes::types
