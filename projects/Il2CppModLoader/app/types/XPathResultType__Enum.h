#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathResultType__Enum {
        namespace {
            app::XPathResultType__Enum__Class* type_info_ref = nullptr;
        }
        app::XPathResultType__Enum__Class** type_info = &type_info_ref;
        inline app::XPathResultType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathResultType__Enum__Class>(type_info, "System.Xml.XPath", "XPathResultType");
        }
        inline app::XPathResultType__Enum* create() {
            return il2cpp::create_object<app::XPathResultType__Enum>(get_class());
        }
        inline app::XPathResultType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathResultType__Enum__Array>(get_class(), size);
        }
        inline app::XPathResultType__Enum__Array* create_array(const std::vector<app::XPathResultType__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::XPathResultType__Enum__Array>(get_class(), items);
        }
    } // namespace XPathResultType__Enum
} // namespace app::classes::types
