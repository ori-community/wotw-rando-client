#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayersSegmentsRequest__Class.h>
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>

namespace app::classes::types {
    namespace GetPlayersSegmentsRequest {
        inline app::GetPlayersSegmentsRequest__Class** type_info = (app::GetPlayersSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04702510));
        inline app::GetPlayersSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersSegmentsRequest__Class>(type_info, "PlayFab.ServerModels", "GetPlayersSegmentsRequest");
        }
        inline app::GetPlayersSegmentsRequest* create() {
            return il2cpp::create_object<app::GetPlayersSegmentsRequest>(get_class());
        }
    } // namespace GetPlayersSegmentsRequest
} // namespace app::classes::types
