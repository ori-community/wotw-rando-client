#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNodeRef__Array {
        namespace {
            app::XPathNodeRef__Array__Class* type_info_ref = nullptr;
        }
        app::XPathNodeRef__Array__Class** type_info = &type_info_ref;
        inline app::XPathNodeRef__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeRef__Array__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodeRef[]");
        }
        inline app::XPathNodeRef__Array* create() {
            return il2cpp::create_object<app::XPathNodeRef__Array>(get_class());
        }
    } // namespace XPathNodeRef__Array
} // namespace app::classes::types
