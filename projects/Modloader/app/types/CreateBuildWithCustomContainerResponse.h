#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerResponse {
        inline app::CreateBuildWithCustomContainerResponse__Class** type_info = (app::CreateBuildWithCustomContainerResponse__Class**)(modloader::win::memory::resolve_rva(0x047344F0));
        inline app::CreateBuildWithCustomContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerResponse");
        }
        inline app::CreateBuildWithCustomContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerResponse
} // namespace app::classes::types
