#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayersInSegmentResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayersInSegmentResult__Class** type_info;
        inline app::GetPlayersInSegmentResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayersInSegmentResult__Class>(type_info, "PlayFab.ServerModels", "GetPlayersInSegmentResult");
        }
        inline app::GetPlayersInSegmentResult* create() {
            return il2cpp::create_object<app::GetPlayersInSegmentResult>(get_class());
        }
    } // namespace GetPlayersInSegmentResult
} // namespace app::classes::types
