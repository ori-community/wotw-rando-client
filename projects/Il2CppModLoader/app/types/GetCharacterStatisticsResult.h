#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsResult {
        inline app::GetCharacterStatisticsResult__Class** type_info = (app::GetCharacterStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x0471CB48));
        inline app::GetCharacterStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "GetCharacterStatisticsResult");
        }
        inline app::GetCharacterStatisticsResult* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsResult>(get_class());
        }
    } // namespace GetCharacterStatisticsResult
} // namespace app::classes::types
