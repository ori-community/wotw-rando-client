#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkXboxAccountResult_1__Class** type_info;
        inline app::UnlinkXboxAccountResult_1__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountResult_1__Class>(type_info, "PlayFab.ServerModels", "UnlinkXboxAccountResult");
        }
        inline app::UnlinkXboxAccountResult_1* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountResult_1>(get_class());
        }
    } // namespace UnlinkXboxAccountResult_1
} // namespace app::classes::types
