#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockEntityRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockEntityRequest__Class** type_info;
        inline app::BlockEntityRequest__Class* get_class() {
            return il2cpp::get_class<app::BlockEntityRequest__Class>(type_info, "PlayFab.GroupsModels", "BlockEntityRequest");
        }
        inline app::BlockEntityRequest* create() {
            return il2cpp::create_object<app::BlockEntityRequest>(get_class());
        }
    } // namespace BlockEntityRequest
} // namespace app::classes::types
