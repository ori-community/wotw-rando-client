#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeCode__Enum__Array {
        inline app::XmlTypeCode__Enum__Array__Class** type_info = (app::XmlTypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047700D8));
        inline app::XmlTypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeCode__Enum__Array__Class>(type_info, "System.Xml.Schema", "XmlTypeCode[]");
        }
        inline app::XmlTypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::XmlTypeCode__Enum__Array>(get_class());
        }
    } // namespace XmlTypeCode__Enum__Array
} // namespace app::classes::types
