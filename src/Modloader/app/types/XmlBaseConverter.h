#pragma once
#include <Modloader/app/structs/XmlBaseConverter.h>
#include <Modloader/app/structs/XmlBaseConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlBaseConverter {
        inline app::XmlBaseConverter__Class** type_info() {
            static app::XmlBaseConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlBaseConverter__Class**)(modloader::win::memory::resolve_rva(0x04774928));
            }
            return cache;
        }
        inline app::XmlBaseConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlBaseConverter__Class>(type_info(), "System.Xml.Schema", "XmlBaseConverter");
        }
        inline app::XmlBaseConverter* create() {
            return il2cpp::create_object<app::XmlBaseConverter>(get_class());
        }
    } // namespace XmlBaseConverter
} // namespace app::classes::types
