#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserCustomIdInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserCustomIdInfo__Class** type_info;
        inline app::UserCustomIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserCustomIdInfo__Class>(type_info, "PlayFab.ClientModels", "UserCustomIdInfo");
        }
        inline app::UserCustomIdInfo* create() {
            return il2cpp::create_object<app::UserCustomIdInfo>(get_class());
        }
    } // namespace UserCustomIdInfo
} // namespace app::classes::types
