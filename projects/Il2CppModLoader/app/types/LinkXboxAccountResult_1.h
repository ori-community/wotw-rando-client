#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkXboxAccountResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkXboxAccountResult_1__Class** type_info;
        inline app::LinkXboxAccountResult_1__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountResult_1__Class>(type_info, "PlayFab.ServerModels", "LinkXboxAccountResult");
        }
        inline app::LinkXboxAccountResult_1* create() {
            return il2cpp::create_object<app::LinkXboxAccountResult_1>(get_class());
        }
    } // namespace LinkXboxAccountResult_1
} // namespace app::classes::types
