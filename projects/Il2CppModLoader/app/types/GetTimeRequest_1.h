#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTimeRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTimeRequest_1__Class** type_info;
        inline app::GetTimeRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetTimeRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetTimeRequest");
        }
        inline app::GetTimeRequest_1* create() {
            return il2cpp::create_object<app::GetTimeRequest_1>(get_class());
        }
    } // namespace GetTimeRequest_1
} // namespace app::classes::types
