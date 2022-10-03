#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRegistrationToken {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XRegistrationToken__Class** type_info;
        inline app::XRegistrationToken__Class* get_class() {
            return il2cpp::get_class<app::XRegistrationToken__Class>(type_info, "XGamingRuntime", "XRegistrationToken");
        }
        inline app::XRegistrationToken* create() {
            return il2cpp::create_object<app::XRegistrationToken>(get_class());
        }
    } // namespace XRegistrationToken
} // namespace app::classes::types
