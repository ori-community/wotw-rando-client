#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetBuildRequest {
        inline app::GetBuildRequest__Class** type_info = (app::GetBuildRequest__Class**)(modloader::win::memory::resolve_rva(0x047081F8));
        inline app::GetBuildRequest__Class* get_class() {
            return il2cpp::get_class<app::GetBuildRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetBuildRequest");
        }
        inline app::GetBuildRequest* create() {
            return il2cpp::create_object<app::GetBuildRequest>(get_class());
        }
    } // namespace GetBuildRequest
} // namespace app::classes::types
