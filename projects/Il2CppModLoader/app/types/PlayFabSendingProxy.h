#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabSendingProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabSendingProxy__Class** type_info;
        inline app::PlayFabSendingProxy__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSendingProxy__Class>(type_info, "", "PlayFabSendingProxy");
        }
        inline app::PlayFabSendingProxy* create() {
            return il2cpp::create_object<app::PlayFabSendingProxy>(get_class());
        }
    } // namespace PlayFabSendingProxy
} // namespace app::classes::types
