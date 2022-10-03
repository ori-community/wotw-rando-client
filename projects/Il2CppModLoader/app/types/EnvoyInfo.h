#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvoyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvoyInfo__Class** type_info;
        inline app::EnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvoyInfo__Class>(type_info, "System.Runtime.Remoting", "EnvoyInfo");
        }
        inline app::EnvoyInfo* create() {
            return il2cpp::create_object<app::EnvoyInfo>(get_class());
        }
    } // namespace EnvoyInfo
} // namespace app::classes::types
