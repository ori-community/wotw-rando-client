#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerSegmentsResult_1__Class** type_info;
        inline app::GetPlayerSegmentsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerSegmentsResult");
        }
        inline app::GetPlayerSegmentsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsResult_1>(get_class());
        }
    } // namespace GetPlayerSegmentsResult_1
} // namespace app::classes::types
