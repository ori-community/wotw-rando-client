#pragma once
#include <Modloader/app/structs/XmlUntypedConverter.h>
#include <Modloader/app/structs/XmlUntypedConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUntypedConverter {
        inline app::XmlUntypedConverter__Class** type_info() {
            static app::XmlUntypedConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlUntypedConverter__Class**)(modloader::win::memory::resolve_rva(0x0474EE10));
            }
            return cache;
        }
        inline app::XmlUntypedConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlUntypedConverter__Class>(type_info(), "System.Xml.Schema", "XmlUntypedConverter");
        }
        inline app::XmlUntypedConverter* create() {
            return il2cpp::create_object<app::XmlUntypedConverter>(get_class());
        }
    } // namespace XmlUntypedConverter
} // namespace app::classes::types
