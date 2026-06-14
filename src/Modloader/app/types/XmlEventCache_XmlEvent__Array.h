#pragma once
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array__Array.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent__Array {
        inline app::XmlEventCache_XmlEvent__Array__Class** type_info() {
            static app::XmlEventCache_XmlEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEventCache_XmlEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x0478C780));
            }
            return cache;
        }
        inline app::XmlEventCache_XmlEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache_XmlEvent__Array__Class>(type_info(), "System.Xml", "XmlEventCache+XmlEvent[]");
        }
        inline app::XmlEventCache_XmlEvent__Array* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEvent__Array>(get_class());
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array__Array>(get_class(), size);
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create_array(const std::vector<app::XmlEventCache_XmlEvent__Array*>& items) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array__Array>(get_class(), items);
        }
    } // namespace XmlEventCache_XmlEvent__Array
} // namespace app::classes::types
