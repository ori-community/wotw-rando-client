#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListQosServersResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListQosServersResponse__Class** type_info;
        inline app::ListQosServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListQosServersResponse");
        }
        inline app::ListQosServersResponse* create() {
            return il2cpp::create_object<app::ListQosServersResponse>(get_class());
        }
    } // namespace ListQosServersResponse
} // namespace app::classes::types
