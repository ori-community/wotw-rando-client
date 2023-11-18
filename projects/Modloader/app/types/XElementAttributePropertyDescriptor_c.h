#pragma once
#include <Modloader/app/structs/XElementAttributePropertyDescriptor_c.h>
#include <Modloader/app/structs/XElementAttributePropertyDescriptor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor_c {
        inline app::XElementAttributePropertyDescriptor_c__Class** type_info() {
            static app::XElementAttributePropertyDescriptor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementAttributePropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x047096C8));
            }
            return cache;
        }
        inline app::XElementAttributePropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementAttributePropertyDescriptor_c__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor", "<>c");
        }
        inline app::XElementAttributePropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor_c>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor_c
} // namespace app::classes::types
