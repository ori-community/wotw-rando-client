#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttrName {
        namespace {
            inline app::XmlWellFormedWriter_AttrName__Class* type_info_ref = nullptr;
        }
        inline app::XmlWellFormedWriter_AttrName__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_AttrName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttrName__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "AttrName");
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
