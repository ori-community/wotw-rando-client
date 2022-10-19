#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlName__Array {
        inline app::XmlName__Array__Class** type_info = (app::XmlName__Array__Class**)(modloader::win::memory::resolve_rva(0x04771D10));
        inline app::XmlName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlName__Array__Class>(type_info, "System.Xml", "XmlName[]");
        }
        inline app::XmlName__Array* create() {
            return il2cpp::create_object<app::XmlName__Array>(get_class());
        }
    } // namespace XmlName__Array
} // namespace app::classes::types
