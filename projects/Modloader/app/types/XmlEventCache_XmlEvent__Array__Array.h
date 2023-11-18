#pragma once
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array__Array.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent__Array__Array {
        inline app::XmlEventCache_XmlEvent__Array__Array__Class** type_info() {
            static app::XmlEventCache_XmlEvent__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlEventCache_XmlEvent__Array__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlEventCache_XmlEvent__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache_XmlEvent__Array__Array__Class>(type_info(), "System.Xml", "XmlEventCache+XmlEvent[][]");
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEvent__Array__Array>(get_class());
        }
    } // namespace XmlEventCache_XmlEvent__Array__Array
} // namespace app::classes::types
