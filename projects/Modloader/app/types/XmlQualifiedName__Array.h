#pragma once
#include <Modloader/app/structs/XmlQualifiedName__Array.h>
#include <Modloader/app/structs/XmlQualifiedName__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlQualifiedName__Array {
        inline app::XmlQualifiedName__Array__Class** type_info() {
            static app::XmlQualifiedName__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlQualifiedName__Array__Class**)(modloader::win::memory::resolve_rva(0x04721A50));
            }
            return cache;
        }
        inline app::XmlQualifiedName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Array__Class>(type_info(), "System.Xml", "XmlQualifiedName[]");
        }
        inline app::XmlQualifiedName__Array* create() {
            return il2cpp::create_object<app::XmlQualifiedName__Array>(get_class());
        }
    } // namespace XmlQualifiedName__Array
} // namespace app::classes::types
