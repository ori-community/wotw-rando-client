#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsRequest {
        inline app::GetCharacterStatisticsRequest__Class** type_info = (app::GetCharacterStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472F988));
        inline app::GetCharacterStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterStatisticsRequest");
        }
        inline app::GetCharacterStatisticsRequest* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsRequest>(get_class());
        }
    } // namespace GetCharacterStatisticsRequest
} // namespace app::classes::types
