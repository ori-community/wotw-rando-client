#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterAttributes__Enum {
        namespace {
            app::ParameterAttributes__Enum__Class* type_info_ref = nullptr;
        }
        app::ParameterAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::ParameterAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParameterAttributes__Enum__Class>(type_info, "System.Reflection", "ParameterAttributes");
        }
        inline app::ParameterAttributes__Enum* create() {
            return il2cpp::create_object<app::ParameterAttributes__Enum>(get_class());
        }
    } // namespace ParameterAttributes__Enum
} // namespace app::classes::types
