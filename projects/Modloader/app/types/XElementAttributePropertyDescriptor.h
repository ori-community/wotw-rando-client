#pragma once
#include <Modloader/app/structs/XElementAttributePropertyDescriptor.h>
#include <Modloader/app/structs/XElementAttributePropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor {
        inline app::XElementAttributePropertyDescriptor__Class** type_info() {
            static app::XElementAttributePropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementAttributePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047909C0));
            }
            return cache;
        }
        inline app::XElementAttributePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementAttributePropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor");
        }
        inline app::XElementAttributePropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor
} // namespace app::classes::types
