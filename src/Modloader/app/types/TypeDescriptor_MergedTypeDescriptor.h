#pragma once
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_MergedTypeDescriptor {
        inline app::TypeDescriptor_MergedTypeDescriptor__Class** type_info() {
            static app::TypeDescriptor_MergedTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_MergedTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0478BBD0));
            }
            return cache;
        }
        inline app::TypeDescriptor_MergedTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_MergedTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "MergedTypeDescriptor");
        }
        inline app::TypeDescriptor_MergedTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_MergedTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_MergedTypeDescriptor
} // namespace app::classes::types
