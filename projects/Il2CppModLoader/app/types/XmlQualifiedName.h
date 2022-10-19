#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlQualifiedName {
        inline app::XmlQualifiedName__Class** type_info = (app::XmlQualifiedName__Class**)(modloader::win::memory::resolve_rva(0x047858F0));
        inline app::XmlQualifiedName__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Class>(type_info, "System.Xml", "XmlQualifiedName");
        }
        inline app::XmlQualifiedName* create() {
            return il2cpp::create_object<app::XmlQualifiedName>(get_class());
        }
        inline app::XmlQualifiedName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlQualifiedName__Array>(get_class(), size);
        }
        inline app::XmlQualifiedName__Array* create_array(const std::vector<app::XmlQualifiedName*>& items) {
            return il2cpp::array_new<app::XmlQualifiedName__Array>(get_class(), items);
        }
    } // namespace XmlQualifiedName
} // namespace app::classes::types
