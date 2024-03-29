#pragma once
#include <Modloader/app/structs/XElementElementsPropertyDescriptor_c.h>
#include <Modloader/app/structs/XElementElementsPropertyDescriptor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementElementsPropertyDescriptor_c {
        inline app::XElementElementsPropertyDescriptor_c__Class** type_info() {
            static app::XElementElementsPropertyDescriptor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementElementsPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0472B3A0));
            }
            return cache;
        }
        inline app::XElementElementsPropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementElementsPropertyDescriptor_c__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementElementsPropertyDescriptor", "<>c");
        }
        inline app::XElementElementsPropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementElementsPropertyDescriptor_c>(get_class());
        }
    } // namespace XElementElementsPropertyDescriptor_c
} // namespace app::classes::types
