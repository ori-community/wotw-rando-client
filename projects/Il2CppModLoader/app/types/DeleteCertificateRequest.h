#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteCertificateRequest {
        inline app::DeleteCertificateRequest__Class** type_info = (app::DeleteCertificateRequest__Class**)(modloader::win::memory::resolve_rva(0x04787CC8));
        inline app::DeleteCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCertificateRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteCertificateRequest");
        }
        inline app::DeleteCertificateRequest* create() {
            return il2cpp::create_object<app::DeleteCertificateRequest>(get_class());
        }
    } // namespace DeleteCertificateRequest
} // namespace app::classes::types
