#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Boxed.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttrName {
        inline app::XmlWellFormedWriter_AttrName__Class** type_info() {
            static app::XmlWellFormedWriter_AttrName__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlWellFormedWriter_AttrName__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_AttrName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttrName__Class>(type_info(), "System.Xml", "XmlWellFormedWriter", "AttrName");
        }
        inline app::XmlWellFormedWriter_AttrName* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttrName>(get_class());
        }
        inline app::XmlWellFormedWriter_AttrName__Boxed* box(app::XmlWellFormedWriter_AttrName value) {
            return il2cpp::box_value<app::XmlWellFormedWriter_AttrName__Boxed>(get_class(), value);
        }
        inline app::XmlWellFormedWriter_AttrName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_AttrName__Array>(get_class(), size);
        }
        inline app::XmlWellFormedWriter_AttrName__Array* create_array(const std::vector<app::XmlWellFormedWriter_AttrName>& items) {
            return il2cpp::array_new<app::XmlWellFormedWriter_AttrName__Array>(get_class(), items);
        }
    } // namespace XmlWellFormedWriter_AttrName
} // namespace app::classes::types
