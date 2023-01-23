#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateBuildRegionsRequest__Class.h>
#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>

namespace app::classes::types {
    namespace UpdateBuildRegionsRequest {
        inline app::UpdateBuildRegionsRequest__Class** type_info = (app::UpdateBuildRegionsRequest__Class**)(modloader::win::memory::resolve_rva(0x04713238));
        inline app::UpdateBuildRegionsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBuildRegionsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "UpdateBuildRegionsRequest");
        }
        inline app::UpdateBuildRegionsRequest* create() {
            return il2cpp::create_object<app::UpdateBuildRegionsRequest>(get_class());
        }
    } // namespace UpdateBuildRegionsRequest
} // namespace app::classes::types
