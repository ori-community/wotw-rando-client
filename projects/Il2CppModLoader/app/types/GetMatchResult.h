#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetMatchResult {
        inline app::GetMatchResult__Class** type_info = (app::GetMatchResult__Class**)(modloader::win::memory::resolve_rva(0x0476F7E8));
        inline app::GetMatchResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchResult");
        }
        inline app::GetMatchResult* create() {
            return il2cpp::create_object<app::GetMatchResult>(get_class());
        }
    } // namespace GetMatchResult
} // namespace app::classes::types
