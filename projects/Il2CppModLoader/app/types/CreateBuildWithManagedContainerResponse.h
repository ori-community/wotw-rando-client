#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerResponse {
        inline app::CreateBuildWithManagedContainerResponse__Class** type_info = (app::CreateBuildWithManagedContainerResponse__Class**)(modloader::win::memory::resolve_rva(0x0471F880));
        inline app::CreateBuildWithManagedContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerResponse");
        }
        inline app::CreateBuildWithManagedContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerResponse
} // namespace app::classes::types
