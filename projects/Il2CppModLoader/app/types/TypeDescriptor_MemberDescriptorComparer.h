#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_MemberDescriptorComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_MemberDescriptorComparer__Class** type_info;
        inline app::TypeDescriptor_MemberDescriptorComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_MemberDescriptorComparer__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "MemberDescriptorComparer");
        }
        inline app::TypeDescriptor_MemberDescriptorComparer* create() {
            return il2cpp::create_object<app::TypeDescriptor_MemberDescriptorComparer>(get_class());
        }
    } // namespace TypeDescriptor_MemberDescriptorComparer
} // namespace app::classes::types
