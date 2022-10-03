#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class** type_info;
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor+ComNativeDescriptionProvider", "ComNativeTypeDescriptor");
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor
} // namespace app::classes::types
