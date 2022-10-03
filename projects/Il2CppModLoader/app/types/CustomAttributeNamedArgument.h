#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeNamedArgument {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomAttributeNamedArgument__Class** type_info;
        inline app::CustomAttributeNamedArgument__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeNamedArgument__Class>(type_info, "System.Reflection", "CustomAttributeNamedArgument");
        }
        inline app::CustomAttributeNamedArgument* create() {
            return il2cpp::create_object<app::CustomAttributeNamedArgument>(get_class());
        }
        inline app::CustomAttributeNamedArgument__Boxed* box(app::CustomAttributeNamedArgument value) {
            return il2cpp::box_value<app::CustomAttributeNamedArgument__Boxed>(get_class(), value);
        }
        inline app::CustomAttributeNamedArgument__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomAttributeNamedArgument__Array>(get_class(), size);
        }
    } // namespace CustomAttributeNamedArgument
} // namespace app::classes::types
