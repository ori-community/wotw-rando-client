#pragma once
#include <Modloader/app/structs/CreateBuildWithCustomContainerResponse.h>
#include <Modloader/app/structs/CreateBuildWithCustomContainerResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerResponse {
        inline app::CreateBuildWithCustomContainerResponse__Class** type_info() {
            static app::CreateBuildWithCustomContainerResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateBuildWithCustomContainerResponse__Class**)(modloader::win::memory::resolve_rva(0x047344F0));
            }
            return cache;
        }
        inline app::CreateBuildWithCustomContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerResponse");
        }
        inline app::CreateBuildWithCustomContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerResponse
} // namespace app::classes::types
