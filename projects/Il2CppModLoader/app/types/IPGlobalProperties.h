#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPGlobalProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPGlobalProperties__Class** type_info;
        inline app::IPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::IPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "IPGlobalProperties");
        }
        inline app::IPGlobalProperties* create() {
            return il2cpp::create_object<app::IPGlobalProperties>(get_class());
        }
    } // namespace IPGlobalProperties
} // namespace app::classes::types
