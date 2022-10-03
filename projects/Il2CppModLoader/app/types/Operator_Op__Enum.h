#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Operator_Op__Enum {
        namespace {
            app::Operator_Op__Enum__Class* type_info_ref = nullptr;
        }
        app::Operator_Op__Enum__Class** type_info = &type_info_ref;
        inline app::Operator_Op__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Operator_Op__Enum__Class>(type_info, "MS.Internal.Xml.XPath", "Operator", "Op");
        }
        inline app::Operator_Op__Enum* create() {
            return il2cpp::create_object<app::Operator_Op__Enum>(get_class());
        }
        inline app::Operator_Op__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Operator_Op__Enum__Array>(get_class(), size);
        }
    } // namespace Operator_Op__Enum
} // namespace app::classes::types
