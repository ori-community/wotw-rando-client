#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperty_Float__Enum__Array {
        namespace {
            app::UberShaderProperty_Float__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UberShaderProperty_Float__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderProperty_Float__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty_Float__Enum__Array__Class>(type_info, "", "UberShaderProperty_Float[]");
        }
        inline app::UberShaderProperty_Float__Enum__Array* create() {
            return il2cpp::create_object<app::UberShaderProperty_Float__Enum__Array>(get_class());
        }
    } // namespace UberShaderProperty_Float__Enum__Array
} // namespace app::classes::types
