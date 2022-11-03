#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor {
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class** type_info = (app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04787178));
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptionProvider", "EmptyCustomTypeDescriptor");
        }
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor
} // namespace app::classes::types
