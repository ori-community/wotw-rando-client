#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcceptGroupApplicationRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcceptGroupApplicationRequest__Class** type_info;
        inline app::AcceptGroupApplicationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupApplicationRequest__Class>(type_info, "PlayFab.GroupsModels", "AcceptGroupApplicationRequest");
        }
        inline app::AcceptGroupApplicationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupApplicationRequest>(get_class());
        }
    } // namespace AcceptGroupApplicationRequest
} // namespace app::classes::types
