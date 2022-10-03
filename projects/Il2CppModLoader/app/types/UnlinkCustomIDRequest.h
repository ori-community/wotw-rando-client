#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkCustomIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkCustomIDRequest__Class** type_info;
        inline app::UnlinkCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkCustomIDRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkCustomIDRequest");
        }
        inline app::UnlinkCustomIDRequest* create() {
            return il2cpp::create_object<app::UnlinkCustomIDRequest>(get_class());
        }
    } // namespace UnlinkCustomIDRequest
} // namespace app::classes::types
