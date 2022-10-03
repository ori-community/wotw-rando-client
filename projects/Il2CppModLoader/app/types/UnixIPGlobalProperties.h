#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnixIPGlobalProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnixIPGlobalProperties__Class** type_info;
        inline app::UnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::UnixIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "UnixIPGlobalProperties");
        }
        inline app::UnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::UnixIPGlobalProperties>(get_class());
        }
    } // namespace UnixIPGlobalProperties
} // namespace app::classes::types
