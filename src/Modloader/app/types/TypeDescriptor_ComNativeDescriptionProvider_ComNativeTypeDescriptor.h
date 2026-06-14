#pragma once
#include <Modloader/app/structs/TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class** type_info() {
            static app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047137E0));
            }
            return cache;
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor+ComNativeDescriptionProvider", "ComNativeTypeDescriptor");
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor
} // namespace app::classes::types
