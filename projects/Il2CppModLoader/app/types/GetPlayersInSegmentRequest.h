#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentRequest {
        inline app::GetPlayersInSegmentRequest__Class** type_info = (app::GetPlayersInSegmentRequest__Class**)(modloader::win::memory::resolve_rva(0x04781200));
        inline app::GetPlayersInSegmentRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentRequest__Class>(type_info, "PlayFab.ServerModels", "GetPlayersInSegmentRequest");
        }
        inline app::GetPlayersInSegmentRequest* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentRequest>(get_class());
        }
    } // namespace GetPlayersInSegmentRequest
} // namespace app::classes::types
