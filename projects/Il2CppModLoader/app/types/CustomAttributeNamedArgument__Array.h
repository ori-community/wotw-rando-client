#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeNamedArgument__Array {
        namespace {
            app::CustomAttributeNamedArgument__Array__Class* type_info_ref = nullptr;
        }
        app::CustomAttributeNamedArgument__Array__Class** type_info = &type_info_ref;
        inline app::CustomAttributeNamedArgument__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeNamedArgument__Array__Class>(type_info, "System.Reflection", "CustomAttributeNamedArgument[]");
        }
        inline app::CustomAttributeNamedArgument__Array* create() {
            return il2cpp::create_object<app::CustomAttributeNamedArgument__Array>(get_class());
        }
    } // namespace CustomAttributeNamedArgument__Array
} // namespace app::classes::types
