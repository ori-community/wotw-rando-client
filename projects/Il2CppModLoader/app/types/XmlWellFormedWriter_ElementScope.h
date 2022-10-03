#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_ElementScope {
        namespace {
            app::XmlWellFormedWriter_ElementScope__Class* type_info_ref = nullptr;
        }
        app::XmlWellFormedWriter_ElementScope__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_ElementScope__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_ElementScope__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "ElementScope");
        }
        inline app::XmlWellFormedWriter_ElementScope* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_ElementScope>(get_class());
        }
        inline app::XmlWellFormedWriter_ElementScope__Boxed* box(app::XmlWellFormedWriter_ElementScope value) {
            return il2cpp::box_value<app::XmlWellFormedWriter_ElementScope__Boxed>(get_class(), value);
        }
        inline app::XmlWellFormedWriter_ElementScope__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_ElementScope__Array>(get_class(), size);
        }
    } // namespace XmlWellFormedWriter_ElementScope
} // namespace app::classes::types
