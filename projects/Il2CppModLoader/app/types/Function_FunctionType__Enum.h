#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Function_FunctionType__Enum {
        namespace {
            app::Function_FunctionType__Enum__Class* type_info_ref = nullptr;
        }
        app::Function_FunctionType__Enum__Class** type_info = &type_info_ref;
        inline app::Function_FunctionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Function_FunctionType__Enum__Class>(type_info, "MS.Internal.Xml.XPath", "Function", "FunctionType");
        }
        inline app::Function_FunctionType__Enum* create() {
            return il2cpp::create_object<app::Function_FunctionType__Enum>(get_class());
        }
    } // namespace Function_FunctionType__Enum
} // namespace app::classes::types
