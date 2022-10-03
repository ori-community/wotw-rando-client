#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdInitFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_XsdInitFunction__Class** type_info;
        inline app::XsdBuilder_XsdInitFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdInitFunction__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdInitFunction");
        }
        inline app::XsdBuilder_XsdInitFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdInitFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdInitFunction
} // namespace app::classes::types
