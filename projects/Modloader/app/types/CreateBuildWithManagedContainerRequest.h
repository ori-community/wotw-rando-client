#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest__Class.h>
#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerRequest {
        inline app::CreateBuildWithManagedContainerRequest__Class** type_info = (app::CreateBuildWithManagedContainerRequest__Class**)(modloader::win::memory::resolve_rva(0x04746640));
        inline app::CreateBuildWithManagedContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerRequest");
        }
        inline app::CreateBuildWithManagedContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerRequest
} // namespace app::classes::types
