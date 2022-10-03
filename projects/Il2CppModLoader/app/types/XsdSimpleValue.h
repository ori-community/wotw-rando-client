#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdSimpleValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdSimpleValue__Class** type_info;
        inline app::XsdSimpleValue__Class* get_class() {
            return il2cpp::get_class<app::XsdSimpleValue__Class>(type_info, "System.Xml.Schema", "XsdSimpleValue");
        }
        inline app::XsdSimpleValue* create() {
            return il2cpp::create_object<app::XsdSimpleValue>(get_class());
        }
    } // namespace XsdSimpleValue
} // namespace app::classes::types
