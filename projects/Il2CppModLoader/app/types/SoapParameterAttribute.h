#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapParameterAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapParameterAttribute__Class** type_info;
        inline app::SoapParameterAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapParameterAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
        }
        inline app::SoapParameterAttribute* create() {
            return il2cpp::create_object<app::SoapParameterAttribute>(get_class());
        }
    } // namespace SoapParameterAttribute
} // namespace app::classes::types
