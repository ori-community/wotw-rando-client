#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleDataRequest_1__Class** type_info;
        inline app::GetTitleDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest_1* create() {
            return il2cpp::create_object<app::GetTitleDataRequest_1>(get_class());
        }
    } // namespace GetTitleDataRequest_1
} // namespace app::classes::types
