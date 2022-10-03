#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeCode__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeCode__Enum__Array__Class** type_info;
        inline app::XmlTypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeCode__Enum__Array__Class>(type_info, "System.Xml.Schema", "XmlTypeCode[]");
        }
        inline app::XmlTypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::XmlTypeCode__Enum__Array>(get_class());
        }
    } // namespace XmlTypeCode__Enum__Array
} // namespace app::classes::types
