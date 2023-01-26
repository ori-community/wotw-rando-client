#pragma once
#include <Modloader/app/structs/CreateBuildWithCustomContainerRequest.h>
#include <Modloader/app/structs/CreateBuildWithCustomContainerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerRequest {
        inline app::CreateBuildWithCustomContainerRequest__Class** type_info() {
            static app::CreateBuildWithCustomContainerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateBuildWithCustomContainerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474AD10));
            }
            return cache;
        }
        inline app::CreateBuildWithCustomContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerRequest");
        }
        inline app::CreateBuildWithCustomContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerRequest
} // namespace app::classes::types
