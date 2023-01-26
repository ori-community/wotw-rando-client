#pragma once
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Boxed.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor {
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class** type_info() {
            static app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04750098));
            }
            return cache;
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor+TypeDescriptionNode", "DefaultExtendedTypeDescriptor");
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor>(get_class());
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Boxed* box(app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor value) {
            return il2cpp::box_value<app::TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Boxed>(get_class(), value);
        }
    } // namespace TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor
} // namespace app::classes::types
