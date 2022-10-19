#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlReflectionImporter_c {
        inline app::XmlReflectionImporter_c__Class** type_info = (app::XmlReflectionImporter_c__Class**)(modloader::win::memory::resolve_rva(0x04784120));
        inline app::XmlReflectionImporter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlReflectionImporter_c__Class>(type_info, "System.Xml.Serialization", "XmlReflectionImporter", "<>c");
        }
        inline app::XmlReflectionImporter_c* create() {
            return il2cpp::create_object<app::XmlReflectionImporter_c>(get_class());
        }
    } // namespace XmlReflectionImporter_c
} // namespace app::classes::types
