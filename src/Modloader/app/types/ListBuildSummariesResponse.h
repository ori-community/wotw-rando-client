#pragma once
#include <Modloader/app/structs/ListBuildSummariesResponse.h>
#include <Modloader/app/structs/ListBuildSummariesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListBuildSummariesResponse {
        inline app::ListBuildSummariesResponse__Class** type_info() {
            static app::ListBuildSummariesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListBuildSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x04762730));
            }
            return cache;
        }
        inline app::ListBuildSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListBuildSummariesResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "ListBuildSummariesResponse");
        }
        inline app::ListBuildSummariesResponse* create() {
            return il2cpp::create_object<app::ListBuildSummariesResponse>(get_class());
        }
    } // namespace ListBuildSummariesResponse
} // namespace app::classes::types
