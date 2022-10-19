#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkFacebookAccountResult {
        inline app::UnlinkFacebookAccountResult__Class** type_info = (app::UnlinkFacebookAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0475C780));
        inline app::UnlinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookAccountResult");
        }
        inline app::UnlinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::UnlinkFacebookAccountResult>(get_class());
        }
    } // namespace UnlinkFacebookAccountResult
} // namespace app::classes::types
