#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapAttribute__Class** type_info;
        inline app::SoapAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapAttribute");
        }
        inline app::SoapAttribute* create() {
            return il2cpp::create_object<app::SoapAttribute>(get_class());
        }
    } // namespace SoapAttribute
} // namespace app::classes::types
