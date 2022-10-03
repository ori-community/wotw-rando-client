#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapServices__Class** type_info;
        inline app::SoapServices__Class* get_class() {
            return il2cpp::get_class<app::SoapServices__Class>(type_info, "System.Runtime.Remoting", "SoapServices");
        }
        inline app::SoapServices* create() {
            return il2cpp::create_object<app::SoapServices>(get_class());
        }
    } // namespace SoapServices
} // namespace app::classes::types
