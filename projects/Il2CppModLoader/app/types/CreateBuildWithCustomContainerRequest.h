#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerRequest {
        inline app::CreateBuildWithCustomContainerRequest__Class** type_info = (app::CreateBuildWithCustomContainerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474AD10));
        inline app::CreateBuildWithCustomContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerRequest");
        }
        inline app::CreateBuildWithCustomContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerRequest
} // namespace app::classes::types
