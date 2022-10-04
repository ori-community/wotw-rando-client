#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEnvoyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEnvoyInfo__Class** type_info;
        inline app::IEnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::IEnvoyInfo__Class>(type_info, "System.Runtime.Remoting", "IEnvoyInfo");
        }
        inline app::IEnvoyInfo* create() {
            return il2cpp::create_object<app::IEnvoyInfo>(get_class());
        }
    } // namespace IEnvoyInfo
} // namespace app::classes::types
