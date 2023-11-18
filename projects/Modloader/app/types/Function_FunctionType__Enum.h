#pragma once
#include <Modloader/app/structs/Function_FunctionType__Enum.h>
#include <Modloader/app/structs/Function_FunctionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Function_FunctionType__Enum {
        inline app::Function_FunctionType__Enum__Class** type_info() {
            static app::Function_FunctionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Function_FunctionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Function_FunctionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Function_FunctionType__Enum__Class>(type_info(), "MS.Internal.Xml.XPath", "Function", "FunctionType");
        }
        inline app::Function_FunctionType__Enum* create() {
            return il2cpp::create_object<app::Function_FunctionType__Enum>(get_class());
        }
    } // namespace Function_FunctionType__Enum
} // namespace app::classes::types
