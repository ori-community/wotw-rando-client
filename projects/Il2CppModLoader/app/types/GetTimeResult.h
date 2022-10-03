#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTimeResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTimeResult__Class** type_info;
        inline app::GetTimeResult__Class* get_class() {
            return il2cpp::get_class<app::GetTimeResult__Class>(type_info, "PlayFab.ClientModels", "GetTimeResult");
        }
        inline app::GetTimeResult* create() {
            return il2cpp::create_object<app::GetTimeResult>(get_class());
        }
    } // namespace GetTimeResult
} // namespace app::classes::types
