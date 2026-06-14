#pragma once
#include <Modloader/app/structs/GetBuildRequest.h>
#include <Modloader/app/structs/GetBuildRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetBuildRequest {
        inline app::GetBuildRequest__Class** type_info() {
            static app::GetBuildRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetBuildRequest__Class**)(modloader::win::memory::resolve_rva(0x047081F8));
            }
            return cache;
        }
        inline app::GetBuildRequest__Class* get_class() {
            return il2cpp::get_class<app::GetBuildRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetBuildRequest");
        }
        inline app::GetBuildRequest* create() {
            return il2cpp::create_object<app::GetBuildRequest>(get_class());
        }
    } // namespace GetBuildRequest
} // namespace app::classes::types
