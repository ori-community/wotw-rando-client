#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetSharedGroupDataRequest_1__Class** type_info;
        inline app::GetSharedGroupDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetSharedGroupDataRequest");
        }
        inline app::GetSharedGroupDataRequest_1* create() {
            return il2cpp::create_object<app::GetSharedGroupDataRequest_1>(get_class());
        }
    } // namespace GetSharedGroupDataRequest_1
} // namespace app::classes::types
