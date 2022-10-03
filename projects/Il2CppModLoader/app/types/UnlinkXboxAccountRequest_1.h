#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkXboxAccountRequest_1__Class** type_info;
        inline app::UnlinkXboxAccountRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountRequest_1__Class>(type_info, "PlayFab.ServerModels", "UnlinkXboxAccountRequest");
        }
        inline app::UnlinkXboxAccountRequest_1* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountRequest_1>(get_class());
        }
    } // namespace UnlinkXboxAccountRequest_1
} // namespace app::classes::types
