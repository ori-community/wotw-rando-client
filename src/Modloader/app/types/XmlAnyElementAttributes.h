#pragma once
#include <Modloader/app/structs/XmlAnyElementAttributes.h>
#include <Modloader/app/structs/XmlAnyElementAttributes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAnyElementAttributes {
        inline app::XmlAnyElementAttributes__Class** type_info() {
            static app::XmlAnyElementAttributes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAnyElementAttributes__Class**)(modloader::win::memory::resolve_rva(0x04789318));
            }
            return cache;
        }
        inline app::XmlAnyElementAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyElementAttributes__Class>(type_info(), "System.Xml.Serialization", "XmlAnyElementAttributes");
        }
        inline app::XmlAnyElementAttributes* create() {
            return il2cpp::create_object<app::XmlAnyElementAttributes>(get_class());
        }
    } // namespace XmlAnyElementAttributes
} // namespace app::classes::types
