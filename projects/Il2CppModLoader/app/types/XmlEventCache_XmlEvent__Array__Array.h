#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent__Array__Array {
        namespace {
            inline app::XmlEventCache_XmlEvent__Array__Array__Class* type_info_ref = nullptr;
        }
        inline app::XmlEventCache_XmlEvent__Array__Array__Class** type_info = &type_info_ref;
        inline app::XmlEventCache_XmlEvent__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache_XmlEvent__Array__Array__Class>(type_info, "System.Xml", "XmlEventCache+XmlEvent[][]");
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEvent__Array__Array>(get_class());
        }
    } // namespace XmlEventCache_XmlEvent__Array__Array
} // namespace app::classes::types
