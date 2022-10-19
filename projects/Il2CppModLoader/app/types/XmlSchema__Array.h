#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchema__Array {
        inline app::XmlSchema__Array__Class** type_info = (app::XmlSchema__Array__Class**)(modloader::win::memory::resolve_rva(0x0479A2B8));
        inline app::XmlSchema__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchema__Array__Class>(type_info, "System.Xml.Schema", "XmlSchema[]");
        }
        inline app::XmlSchema__Array* create() {
            return il2cpp::create_object<app::XmlSchema__Array>(get_class());
        }
    } // namespace XmlSchema__Array
} // namespace app::classes::types
