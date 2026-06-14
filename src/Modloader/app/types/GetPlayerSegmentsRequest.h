#pragma once
#include <Modloader/app/structs/GetPlayerSegmentsRequest.h>
#include <Modloader/app/structs/GetPlayerSegmentsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsRequest {
        inline app::GetPlayerSegmentsRequest__Class** type_info() {
            static app::GetPlayerSegmentsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04774A10));
            }
            return cache;
        }
        inline app::GetPlayerSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerSegmentsRequest");
        }
        inline app::GetPlayerSegmentsRequest* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsRequest>(get_class());
        }
    } // namespace GetPlayerSegmentsRequest
} // namespace app::classes::types
