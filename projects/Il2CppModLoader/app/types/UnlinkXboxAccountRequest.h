#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountRequest {
        inline app::UnlinkXboxAccountRequest__Class** type_info = (app::UnlinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04703F30));
        inline app::UnlinkXboxAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkXboxAccountRequest");
        }
        inline app::UnlinkXboxAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountRequest>(get_class());
        }
    } // namespace UnlinkXboxAccountRequest
} // namespace app::classes::types
