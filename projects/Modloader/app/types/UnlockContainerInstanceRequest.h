#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest__Class.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest.h>

namespace app::classes::types {
    namespace UnlockContainerInstanceRequest {
        inline app::UnlockContainerInstanceRequest__Class** type_info = (app::UnlockContainerInstanceRequest__Class**)(modloader::win::memory::resolve_rva(0x04717A30));
        inline app::UnlockContainerInstanceRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerInstanceRequest__Class>(type_info, "PlayFab.ClientModels", "UnlockContainerInstanceRequest");
        }
        inline app::UnlockContainerInstanceRequest* create() {
            return il2cpp::create_object<app::UnlockContainerInstanceRequest>(get_class());
        }
    } // namespace UnlockContainerInstanceRequest
} // namespace app::classes::types
