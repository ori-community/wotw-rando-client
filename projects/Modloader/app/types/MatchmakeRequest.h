#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakeRequest__Class.h>
#include <Modloader/app/structs/MatchmakeRequest.h>

namespace app::classes::types {
    namespace MatchmakeRequest {
        inline app::MatchmakeRequest__Class** type_info = (app::MatchmakeRequest__Class**)(modloader::win::memory::resolve_rva(0x04788AB8));
        inline app::MatchmakeRequest__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeRequest__Class>(type_info, "PlayFab.ClientModels", "MatchmakeRequest");
        }
        inline app::MatchmakeRequest* create() {
            return il2cpp::create_object<app::MatchmakeRequest>(get_class());
        }
    } // namespace MatchmakeRequest
} // namespace app::classes::types
