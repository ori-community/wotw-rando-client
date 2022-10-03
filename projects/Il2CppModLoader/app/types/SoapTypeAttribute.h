#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapTypeAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapTypeAttribute__Class** type_info;
        inline app::SoapTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapTypeAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
        }
        inline app::SoapTypeAttribute* create() {
            return il2cpp::create_object<app::SoapTypeAttribute>(get_class());
        }
    } // namespace SoapTypeAttribute
} // namespace app::classes::types
