#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoapFieldAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoapFieldAttribute__Class** type_info;
        inline app::SoapFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapFieldAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
        }
        inline app::SoapFieldAttribute* create() {
            return il2cpp::create_object<app::SoapFieldAttribute>(get_class());
        }
    } // namespace SoapFieldAttribute
} // namespace app::classes::types
