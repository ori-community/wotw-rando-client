#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetMatchRequest {
        inline app::GetMatchRequest__Class** type_info = (app::GetMatchRequest__Class**)(modloader::win::memory::resolve_rva(0x04739BC0));
        inline app::GetMatchRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchRequest");
        }
        inline app::GetMatchRequest* create() {
            return il2cpp::create_object<app::GetMatchRequest>(get_class());
        }
    } // namespace GetMatchRequest
} // namespace app::classes::types
