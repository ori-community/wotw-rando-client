#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsMemberResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IsMemberResponse__Class** type_info;
        inline app::IsMemberResponse__Class* get_class() {
            return il2cpp::get_class<app::IsMemberResponse__Class>(type_info, "PlayFab.GroupsModels", "IsMemberResponse");
        }
        inline app::IsMemberResponse* create() {
            return il2cpp::create_object<app::IsMemberResponse>(get_class());
        }
    } // namespace IsMemberResponse
} // namespace app::classes::types
