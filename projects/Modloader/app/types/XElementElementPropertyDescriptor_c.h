#pragma once
#include <Modloader/app/structs/XElementElementPropertyDescriptor_c.h>
#include <Modloader/app/structs/XElementElementPropertyDescriptor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementElementPropertyDescriptor_c {
        inline app::XElementElementPropertyDescriptor_c__Class** type_info() {
            static app::XElementElementPropertyDescriptor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementElementPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0473CF78));
            }
            return cache;
        }
        inline app::XElementElementPropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementElementPropertyDescriptor_c__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementElementPropertyDescriptor", "<>c");
        }
        inline app::XElementElementPropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementElementPropertyDescriptor_c>(get_class());
        }
    } // namespace XElementElementPropertyDescriptor_c
} // namespace app::classes::types
