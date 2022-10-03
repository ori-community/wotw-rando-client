#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapMethodAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapMethodAttribute__Class** type_info;
        inline app::SoapMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapMethodAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
        }
        inline app::SoapMethodAttribute* create() {
            return il2cpp::create_object<app::SoapMethodAttribute>(get_class());
        }
    } // namespace SoapMethodAttribute
} // namespace app::classes::types
