#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateSharedGroupResult_1__Class** type_info;
        inline app::CreateSharedGroupResult_1__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupResult_1__Class>(type_info, "PlayFab.ServerModels", "CreateSharedGroupResult");
        }
        inline app::CreateSharedGroupResult_1* create() {
            return il2cpp::create_object<app::CreateSharedGroupResult_1>(get_class());
        }
    } // namespace CreateSharedGroupResult_1
} // namespace app::classes::types
