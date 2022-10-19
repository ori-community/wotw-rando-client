#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentResult {
        inline app::GetPlayersInSegmentResult__Class** type_info = (app::GetPlayersInSegmentResult__Class**)(modloader::win::memory::resolve_rva(0x04792C08));
        inline app::GetPlayersInSegmentResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentResult__Class>(type_info, "PlayFab.ServerModels", "GetPlayersInSegmentResult");
        }
        inline app::GetPlayersInSegmentResult* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentResult>(get_class());
        }
    } // namespace GetPlayersInSegmentResult
} // namespace app::classes::types
