#pragma once
#include <Modloader/app/structs/XmlAnyConverter.h>
#include <Modloader/app/structs/XmlAnyConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAnyConverter {
        inline app::XmlAnyConverter__Class** type_info() {
            static app::XmlAnyConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAnyConverter__Class**)(modloader::win::memory::resolve_rva(0x0470EA10));
            }
            return cache;
        }
        inline app::XmlAnyConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyConverter__Class>(type_info(), "System.Xml.Schema", "XmlAnyConverter");
        }
        inline app::XmlAnyConverter* create() {
            return il2cpp::create_object<app::XmlAnyConverter>(get_class());
        }
    } // namespace XmlAnyConverter
} // namespace app::classes::types
