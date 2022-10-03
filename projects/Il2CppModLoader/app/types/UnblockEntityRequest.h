#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnblockEntityRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnblockEntityRequest__Class** type_info;
        inline app::UnblockEntityRequest__Class* get_class() {
            return il2cpp::get_class<app::UnblockEntityRequest__Class>(type_info, "PlayFab.GroupsModels", "UnblockEntityRequest");
        }
        inline app::UnblockEntityRequest* create() {
            return il2cpp::create_object<app::UnblockEntityRequest>(get_class());
        }
    } // namespace UnblockEntityRequest
} // namespace app::classes::types
