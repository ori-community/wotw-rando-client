#pragma once
#include <Modloader/app/structs/XElementXmlPropertyDescriptor.h>
#include <Modloader/app/structs/XElementXmlPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementXmlPropertyDescriptor {
        inline app::XElementXmlPropertyDescriptor__Class** type_info() {
            static app::XElementXmlPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementXmlPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047848C0));
            }
            return cache;
        }
        inline app::XElementXmlPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementXmlPropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementXmlPropertyDescriptor");
        }
        inline app::XElementXmlPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementXmlPropertyDescriptor>(get_class());
        }
    } // namespace XElementXmlPropertyDescriptor
} // namespace app::classes::types
