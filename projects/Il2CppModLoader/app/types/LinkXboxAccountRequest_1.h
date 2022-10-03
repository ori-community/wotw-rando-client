#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkXboxAccountRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkXboxAccountRequest_1__Class** type_info;
        inline app::LinkXboxAccountRequest_1__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountRequest_1__Class>(type_info, "PlayFab.ServerModels", "LinkXboxAccountRequest");
        }
        inline app::LinkXboxAccountRequest_1* create() {
            return il2cpp::create_object<app::LinkXboxAccountRequest_1>(get_class());
        }
    } // namespace LinkXboxAccountRequest_1
} // namespace app::classes::types
