#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsResult {
        inline app::GetPlayerSegmentsResult__Class** type_info = (app::GetPlayerSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x0470B910));
        inline app::GetPlayerSegmentsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerSegmentsResult");
        }
        inline app::GetPlayerSegmentsResult* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsResult>(get_class());
        }
    } // namespace GetPlayerSegmentsResult
} // namespace app::classes::types
