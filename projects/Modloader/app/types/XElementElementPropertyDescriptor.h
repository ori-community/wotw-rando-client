#pragma once
#include <Modloader/app/structs/XElementElementPropertyDescriptor.h>
#include <Modloader/app/structs/XElementElementPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementElementPropertyDescriptor {
        inline app::XElementElementPropertyDescriptor__Class** type_info() {
            static app::XElementElementPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementElementPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0471C178));
            }
            return cache;
        }
        inline app::XElementElementPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementPropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementElementPropertyDescriptor");
        }
        inline app::XElementElementPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementPropertyDescriptor
} // namespace app::classes::types
