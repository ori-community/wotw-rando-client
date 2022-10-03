#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListQosServersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListQosServersRequest__Class** type_info;
        inline app::ListQosServersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListQosServersRequest");
        }
        inline app::ListQosServersRequest* create() {
            return il2cpp::create_object<app::ListQosServersRequest>(get_class());
        }
    } // namespace ListQosServersRequest
} // namespace app::classes::types
