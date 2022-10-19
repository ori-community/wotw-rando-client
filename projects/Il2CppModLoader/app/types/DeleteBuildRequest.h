#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteBuildRequest {
        inline app::DeleteBuildRequest__Class** type_info = (app::DeleteBuildRequest__Class**)(modloader::win::memory::resolve_rva(0x04783198));
        inline app::DeleteBuildRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteBuildRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteBuildRequest");
        }
        inline app::DeleteBuildRequest* create() {
            return il2cpp::create_object<app::DeleteBuildRequest>(get_class());
        }
    } // namespace DeleteBuildRequest
} // namespace app::classes::types
