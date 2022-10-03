#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_MergedTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_MergedTypeDescriptor__Class** type_info;
        inline app::TypeDescriptor_MergedTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_MergedTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "MergedTypeDescriptor");
        }
        inline app::TypeDescriptor_MergedTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_MergedTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_MergedTypeDescriptor
} // namespace app::classes::types
