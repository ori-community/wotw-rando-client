#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_ComNativeDescriptionProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_ComNativeDescriptionProvider__Class** type_info;
        inline app::TypeDescriptor_ComNativeDescriptionProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_ComNativeDescriptionProvider__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "ComNativeDescriptionProvider");
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider* create() {
            return il2cpp::create_object<app::TypeDescriptor_ComNativeDescriptionProvider>(get_class());
        }
    } // namespace TypeDescriptor_ComNativeDescriptionProvider
} // namespace app::classes::types
