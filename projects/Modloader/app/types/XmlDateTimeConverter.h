#pragma once
#include <Modloader/app/structs/XmlDateTimeConverter.h>
#include <Modloader/app/structs/XmlDateTimeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDateTimeConverter {
        inline app::XmlDateTimeConverter__Class** type_info() {
            static app::XmlDateTimeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDateTimeConverter__Class**)(modloader::win::memory::resolve_rva(0x0472ED78));
            }
            return cache;
        }
        inline app::XmlDateTimeConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeConverter__Class>(type_info(), "System.Xml.Schema", "XmlDateTimeConverter");
        }
        inline app::XmlDateTimeConverter* create() {
            return il2cpp::create_object<app::XmlDateTimeConverter>(get_class());
        }
    } // namespace XmlDateTimeConverter
} // namespace app::classes::types
