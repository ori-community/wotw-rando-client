#pragma once
#include <Modloader/app/structs/CreateBuildWithManagedContainerResponse.h>
#include <Modloader/app/structs/CreateBuildWithManagedContainerResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerResponse {
        inline app::CreateBuildWithManagedContainerResponse__Class** type_info() {
            static app::CreateBuildWithManagedContainerResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateBuildWithManagedContainerResponse__Class**)(modloader::win::memory::resolve_rva(0x0471F880));
            }
            return cache;
        }
        inline app::CreateBuildWithManagedContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerResponse");
        }
        inline app::CreateBuildWithManagedContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerResponse
} // namespace app::classes::types
