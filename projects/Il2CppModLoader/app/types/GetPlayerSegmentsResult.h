#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerSegmentsResult__Class** type_info;
        inline app::GetPlayerSegmentsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerSegmentsResult");
        }
        inline app::GetPlayerSegmentsResult* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsResult>(get_class());
        }
    } // namespace GetPlayerSegmentsResult
} // namespace app::classes::types
