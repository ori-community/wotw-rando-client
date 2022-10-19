#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkGameCenterAccountRequest {
        inline app::LinkGameCenterAccountRequest__Class** type_info = (app::LinkGameCenterAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047842E0));
        inline app::LinkGameCenterAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkGameCenterAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkGameCenterAccountRequest");
        }
        inline app::LinkGameCenterAccountRequest* create() {
            return il2cpp::create_object<app::LinkGameCenterAccountRequest>(get_class());
        }
    } // namespace LinkGameCenterAccountRequest
} // namespace app::classes::types
