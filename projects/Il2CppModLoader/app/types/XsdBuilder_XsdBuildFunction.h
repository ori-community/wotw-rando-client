#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdBuildFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_XsdBuildFunction__Class** type_info;
        inline app::XsdBuilder_XsdBuildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdBuildFunction__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdBuildFunction");
        }
        inline app::XsdBuilder_XsdBuildFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdBuildFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdBuildFunction
} // namespace app::classes::types
