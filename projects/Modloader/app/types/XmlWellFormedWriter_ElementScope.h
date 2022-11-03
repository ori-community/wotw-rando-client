#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_ElementScope {
        namespace {
            inline app::XmlWellFormedWriter_ElementScope__Class* type_info_ref = nullptr;
        }
        inline app::XmlWellFormedWriter_ElementScope__Class** type_info = &type_info_ref;
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
        inline app::XmlWellFormedWriter_ElementScope__Array* create_array(const std::vector<app::XmlWellFormedWriter_ElementScope>& items) {
            return il2cpp::array_new<app::XmlWellFormedWriter_ElementScope__Array>(get_class(), items);
        }
    } // namespace XmlWellFormedWriter_ElementScope
} // namespace app::classes::types
