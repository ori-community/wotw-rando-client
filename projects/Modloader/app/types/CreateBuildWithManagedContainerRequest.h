#pragma once
#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest.h>
#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerRequest {
        inline app::CreateBuildWithManagedContainerRequest__Class** type_info() {
            static app::CreateBuildWithManagedContainerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateBuildWithManagedContainerRequest__Class**)(modloader::win::memory::resolve_rva(0x04746640));
            }
            return cache;
        }
        inline app::CreateBuildWithManagedContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerRequest");
        }
        inline app::CreateBuildWithManagedContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerRequest
} // namespace app::classes::types
