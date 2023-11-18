#pragma once
#include <Modloader/app/structs/XPathResultType__Enum.h>
#include <Modloader/app/structs/XPathResultType__Enum__Array.h>
#include <Modloader/app/structs/XPathResultType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathResultType__Enum {
        inline app::XPathResultType__Enum__Class** type_info() {
            static app::XPathResultType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathResultType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathResultType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathResultType__Enum__Class>(type_info(), "System.Xml.XPath", "XPathResultType");
        }
        inline app::XPathResultType__Enum* create() {
            return il2cpp::create_object<app::XPathResultType__Enum>(get_class());
        }
        inline app::XPathResultType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathResultType__Enum__Array>(get_class(), size);
        }
        inline app::XPathResultType__Enum__Array* create_array(const std::vector<app::XPathResultType__Enum*>& items) {
            return il2cpp::array_new<app::XPathResultType__Enum__Array>(get_class(), items);
        }
    } // namespace XPathResultType__Enum
} // namespace app::classes::types
