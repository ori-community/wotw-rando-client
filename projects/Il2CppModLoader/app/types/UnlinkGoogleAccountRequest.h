#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkGoogleAccountRequest {
        inline app::UnlinkGoogleAccountRequest__Class** type_info = (app::UnlinkGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04724558));
        inline app::UnlinkGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGoogleAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkGoogleAccountRequest");
        }
        inline app::UnlinkGoogleAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkGoogleAccountRequest>(get_class());
        }
    } // namespace UnlinkGoogleAccountRequest
} // namespace app::classes::types
