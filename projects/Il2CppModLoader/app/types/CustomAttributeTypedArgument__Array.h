#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeTypedArgument__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomAttributeTypedArgument__Array__Class** type_info;
        inline app::CustomAttributeTypedArgument__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeTypedArgument__Array__Class>(type_info, "System.Reflection", "CustomAttributeTypedArgument[]");
        }
        inline app::CustomAttributeTypedArgument__Array* create() {
            return il2cpp::create_object<app::CustomAttributeTypedArgument__Array>(get_class());
        }
    } // namespace CustomAttributeTypedArgument__Array
} // namespace app::classes::types
