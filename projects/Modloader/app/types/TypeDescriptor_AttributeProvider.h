#pragma once
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider.h>
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_AttributeProvider {
        inline app::TypeDescriptor_AttributeProvider__Class** type_info() {
            static app::TypeDescriptor_AttributeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_AttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0476AB48));
            }
            return cache;
        }
        inline app::TypeDescriptor_AttributeProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_AttributeProvider__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "AttributeProvider");
        }
        inline app::TypeDescriptor_AttributeProvider* create() {
            return il2cpp::create_object<app::TypeDescriptor_AttributeProvider>(get_class());
        }
    } // namespace TypeDescriptor_AttributeProvider
} // namespace app::classes::types
