#pragma once
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor.h>
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementDescendantsPropertyDescriptor {
        inline app::XElementDescendantsPropertyDescriptor__Class** type_info() {
            static app::XElementDescendantsPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementDescendantsPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04730DD0));
            }
            return cache;
        }
        inline app::XElementDescendantsPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementDescendantsPropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementDescendantsPropertyDescriptor");
        }
        inline app::XElementDescendantsPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementDescendantsPropertyDescriptor>(get_class());
        }
    } // namespace XElementDescendantsPropertyDescriptor
} // namespace app::classes::types
