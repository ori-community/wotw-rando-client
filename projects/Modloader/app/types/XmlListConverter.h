#pragma once
#include <Modloader/app/structs/XmlListConverter.h>
#include <Modloader/app/structs/XmlListConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlListConverter {
        inline app::XmlListConverter__Class** type_info() {
            static app::XmlListConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlListConverter__Class**)(modloader::win::memory::resolve_rva(0x0472AB88));
            }
            return cache;
        }
        inline app::XmlListConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlListConverter__Class>(type_info(), "System.Xml.Schema", "XmlListConverter");
        }
        inline app::XmlListConverter* create() {
            return il2cpp::create_object<app::XmlListConverter>(get_class());
        }
    } // namespace XmlListConverter
} // namespace app::classes::types
