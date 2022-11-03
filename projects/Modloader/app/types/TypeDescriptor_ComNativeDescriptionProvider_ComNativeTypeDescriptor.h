#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class** type_info = (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047137E0));
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor+ComNativeDescriptionProvider", "ComNativeTypeDescriptor");
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor
} // namespace app::classes::types
