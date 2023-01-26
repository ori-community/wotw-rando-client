#pragma once
#include <Modloader/app/structs/DeleteBuildRequest.h>
#include <Modloader/app/structs/DeleteBuildRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteBuildRequest {
        inline app::DeleteBuildRequest__Class** type_info() {
            static app::DeleteBuildRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteBuildRequest__Class**)(modloader::win::memory::resolve_rva(0x04783198));
            }
            return cache;
        }
        inline app::DeleteBuildRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteBuildRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "DeleteBuildRequest");
        }
        inline app::DeleteBuildRequest* create() {
            return il2cpp::create_object<app::DeleteBuildRequest>(get_class());
        }
    } // namespace DeleteBuildRequest
} // namespace app::classes::types
