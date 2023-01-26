#pragma once
#include <Modloader/app/structs/GetAllSegmentsRequest.h>
#include <Modloader/app/structs/GetAllSegmentsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAllSegmentsRequest {
        inline app::GetAllSegmentsRequest__Class** type_info() {
            static app::GetAllSegmentsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetAllSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04736258));
            }
            return cache;
        }
        inline app::GetAllSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAllSegmentsRequest__Class>(type_info(), "PlayFab.ServerModels", "GetAllSegmentsRequest");
        }
        inline app::GetAllSegmentsRequest* create() {
            return il2cpp::create_object<app::GetAllSegmentsRequest>(get_class());
        }
    } // namespace GetAllSegmentsRequest
} // namespace app::classes::types
