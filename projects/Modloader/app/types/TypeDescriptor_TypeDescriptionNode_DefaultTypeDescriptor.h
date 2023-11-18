#pragma once
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class** type_info() {
            static app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474D778));
            }
            return cache;
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor+TypeDescriptionNode", "DefaultTypeDescriptor");
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor>(get_class());
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* box(app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor value) {
            return il2cpp::box_value<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed>(get_class(), value);
        }
    } // namespace TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor
} // namespace app::classes::types
