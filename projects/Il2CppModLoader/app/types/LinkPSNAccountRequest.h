#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkPSNAccountRequest {
        inline app::LinkPSNAccountRequest__Class** type_info = (app::LinkPSNAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047364C0));
        inline app::LinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkPSNAccountRequest");
        }
        inline app::LinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::LinkPSNAccountRequest>(get_class());
        }
    } // namespace LinkPSNAccountRequest
} // namespace app::classes::types
