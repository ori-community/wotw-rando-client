#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountRequest {
        inline app::UnlinkPSNAccountRequest__Class** type_info = (app::UnlinkPSNAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04732900));
        inline app::UnlinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkPSNAccountRequest");
        }
        inline app::UnlinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountRequest>(get_class());
        }
    } // namespace UnlinkPSNAccountRequest
} // namespace app::classes::types
