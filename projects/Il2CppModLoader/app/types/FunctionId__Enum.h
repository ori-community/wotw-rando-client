#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FunctionId__Enum {
        namespace {
            app::FunctionId__Enum__Class* type_info_ref = nullptr;
        }
        app::FunctionId__Enum__Class** type_info = &type_info_ref;
        inline app::FunctionId__Enum__Class* get_class() {
            return il2cpp::get_class<app::FunctionId__Enum__Class>(type_info, "System.Data", "FunctionId");
        }
        inline app::FunctionId__Enum* create() {
            return il2cpp::create_object<app::FunctionId__Enum>(get_class());
        }
    } // namespace FunctionId__Enum
} // namespace app::classes::types
