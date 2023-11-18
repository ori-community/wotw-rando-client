#pragma once
#include <Modloader/app/structs/TypeDescriptionProvider_EmptyCustomTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor {
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class** type_info() {
            static app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04787178));
            }
            return cache;
        }
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptionProvider", "EmptyCustomTypeDescriptor");
        }
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor
} // namespace app::classes::types
