#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveGroupApplicationRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveGroupApplicationRequest__Class** type_info;
        inline app::RemoveGroupApplicationRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGroupApplicationRequest__Class>(type_info, "PlayFab.GroupsModels", "RemoveGroupApplicationRequest");
        }
        inline app::RemoveGroupApplicationRequest* create() {
            return il2cpp::create_object<app::RemoveGroupApplicationRequest>(get_class());
        }
    } // namespace RemoveGroupApplicationRequest
} // namespace app::classes::types
