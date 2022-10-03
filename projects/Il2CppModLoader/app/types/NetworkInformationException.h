#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkInformationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetworkInformationException__Class** type_info;
        inline app::NetworkInformationException__Class* get_class() {
            return il2cpp::get_class<app::NetworkInformationException__Class>(type_info, "System.Net.NetworkInformation", "NetworkInformationException");
        }
        inline app::NetworkInformationException* create() {
            return il2cpp::create_object<app::NetworkInformationException>(get_class());
        }
    } // namespace NetworkInformationException
} // namespace app::classes::types
