#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTimeResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTimeResult_1__Class** type_info;
        inline app::GetTimeResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetTimeResult_1__Class>(type_info, "PlayFab.ServerModels", "GetTimeResult");
        }
        inline app::GetTimeResult_1* create() {
            return il2cpp::create_object<app::GetTimeResult_1>(get_class());
        }
    } // namespace GetTimeResult_1
} // namespace app::classes::types
