#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsRequest {
        inline app::GetPlayerSegmentsRequest__Class** type_info = (app::GetPlayerSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04774A10));
        inline app::GetPlayerSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerSegmentsRequest");
        }
        inline app::GetPlayerSegmentsRequest* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsRequest>(get_class());
        }
    } // namespace GetPlayerSegmentsRequest
} // namespace app::classes::types
