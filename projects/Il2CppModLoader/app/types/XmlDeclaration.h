#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDeclaration {
        inline app::XmlDeclaration__Class** type_info = (app::XmlDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0472B770));
        inline app::XmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::XmlDeclaration__Class>(type_info, "System.Xml", "XmlDeclaration");
        }
        inline app::XmlDeclaration* create() {
            return il2cpp::create_object<app::XmlDeclaration>(get_class());
        }
    } // namespace XmlDeclaration
} // namespace app::classes::types
