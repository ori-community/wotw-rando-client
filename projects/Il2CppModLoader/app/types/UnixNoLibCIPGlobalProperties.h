#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnixNoLibCIPGlobalProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnixNoLibCIPGlobalProperties__Class** type_info;
        inline app::UnixNoLibCIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::UnixNoLibCIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
        }
        inline app::UnixNoLibCIPGlobalProperties* create() {
            return il2cpp::create_object<app::UnixNoLibCIPGlobalProperties>(get_class());
        }
    } // namespace UnixNoLibCIPGlobalProperties
} // namespace app::classes::types
