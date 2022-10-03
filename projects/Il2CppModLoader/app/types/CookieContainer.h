#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieContainer__Class** type_info;
        inline app::CookieContainer__Class* get_class() {
            return il2cpp::get_class<app::CookieContainer__Class>(type_info, "System.Net", "CookieContainer");
        }
        inline app::CookieContainer* create() {
            return il2cpp::create_object<app::CookieContainer>(get_class());
        }
    } // namespace CookieContainer
} // namespace app::classes::types
