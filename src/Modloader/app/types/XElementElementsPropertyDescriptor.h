#pragma once
#include <Modloader/app/structs/XElementElementsPropertyDescriptor.h>
#include <Modloader/app/structs/XElementElementsPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementElementsPropertyDescriptor {
        inline app::XElementElementsPropertyDescriptor__Class** type_info() {
            static app::XElementElementsPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementElementsPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0470F7A8));
            }
            return cache;
        }
        inline app::XElementElementsPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementsPropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementElementsPropertyDescriptor");
        }
        inline app::XElementElementsPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementsPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementsPropertyDescriptor
} // namespace app::classes::types
