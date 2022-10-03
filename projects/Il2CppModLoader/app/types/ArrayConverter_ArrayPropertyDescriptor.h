#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayConverter_ArrayPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayConverter_ArrayPropertyDescriptor__Class** type_info;
        inline app::ArrayConverter_ArrayPropertyDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayConverter_ArrayPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ArrayConverter", "ArrayPropertyDescriptor");
        }
        inline app::ArrayConverter_ArrayPropertyDescriptor* create() {
            return il2cpp::create_object<app::ArrayConverter_ArrayPropertyDescriptor>(get_class());
        }
    } // namespace ArrayConverter_ArrayPropertyDescriptor
} // namespace app::classes::types
