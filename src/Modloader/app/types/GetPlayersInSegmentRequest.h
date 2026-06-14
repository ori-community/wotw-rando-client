#pragma once
#include <Modloader/app/structs/GetPlayersInSegmentRequest.h>
#include <Modloader/app/structs/GetPlayersInSegmentRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentRequest {
        inline app::GetPlayersInSegmentRequest__Class** type_info() {
            static app::GetPlayersInSegmentRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayersInSegmentRequest__Class**)(modloader::win::memory::resolve_rva(0x04781200));
            }
            return cache;
        }
        inline app::GetPlayersInSegmentRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentRequest__Class>(type_info(), "PlayFab.ServerModels", "GetPlayersInSegmentRequest");
        }
        inline app::GetPlayersInSegmentRequest* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentRequest>(get_class());
        }
    } // namespace GetPlayersInSegmentRequest
} // namespace app::classes::types
