#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsMemberRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IsMemberRequest__Class** type_info;
        inline app::IsMemberRequest__Class* get_class() {
            return il2cpp::get_class<app::IsMemberRequest__Class>(type_info, "PlayFab.GroupsModels", "IsMemberRequest");
        }
        inline app::IsMemberRequest* create() {
            return il2cpp::create_object<app::IsMemberRequest>(get_class());
        }
    } // namespace IsMemberRequest
} // namespace app::classes::types
