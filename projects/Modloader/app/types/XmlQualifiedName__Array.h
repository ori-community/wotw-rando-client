#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlQualifiedName__Array {
        inline app::XmlQualifiedName__Array__Class** type_info = (app::XmlQualifiedName__Array__Class**)(modloader::win::memory::resolve_rva(0x04721A50));
        inline app::XmlQualifiedName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Array__Class>(type_info, "System.Xml", "XmlQualifiedName[]");
        }
        inline app::XmlQualifiedName__Array* create() {
            return il2cpp::create_object<app::XmlQualifiedName__Array>(get_class());
        }
    } // namespace XmlQualifiedName__Array
} // namespace app::classes::types
