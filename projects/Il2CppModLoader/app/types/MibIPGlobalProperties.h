#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MibIPGlobalProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MibIPGlobalProperties__Class** type_info;
        inline app::MibIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::MibIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "MibIPGlobalProperties");
        }
        inline app::MibIPGlobalProperties* create() {
            return il2cpp::create_object<app::MibIPGlobalProperties>(get_class());
        }
    } // namespace MibIPGlobalProperties
} // namespace app::classes::types
