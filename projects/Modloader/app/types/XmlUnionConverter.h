#pragma once
#include <Modloader/app/structs/XmlUnionConverter.h>
#include <Modloader/app/structs/XmlUnionConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUnionConverter {
        inline app::XmlUnionConverter__Class** type_info() {
            static app::XmlUnionConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlUnionConverter__Class**)(modloader::win::memory::resolve_rva(0x04715B38));
            }
            return cache;
        }
        inline app::XmlUnionConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlUnionConverter__Class>(type_info(), "System.Xml.Schema", "XmlUnionConverter");
        }
        inline app::XmlUnionConverter* create() {
            return il2cpp::create_object<app::XmlUnionConverter>(get_class());
        }
    } // namespace XmlUnionConverter
} // namespace app::classes::types
