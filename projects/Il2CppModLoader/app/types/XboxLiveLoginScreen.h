#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxLiveLoginScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxLiveLoginScreen__Class** type_info;
        inline app::XboxLiveLoginScreen__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveLoginScreen__Class>(type_info, "", "XboxLiveLoginScreen");
        }
        inline app::XboxLiveLoginScreen* create() {
            return il2cpp::create_object<app::XboxLiveLoginScreen>(get_class());
        }
    } // namespace XboxLiveLoginScreen
} // namespace app::classes::types
