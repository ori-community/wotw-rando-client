#pragma once
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#include <Modloader/app/structs/XmlTypeMapElementInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapElementInfo {
        inline app::XmlTypeMapElementInfo__Class** type_info() {
            static app::XmlTypeMapElementInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapElementInfo__Class**)(modloader::win::memory::resolve_rva(0x04781898));
            }
            return cache;
        }
        inline app::XmlTypeMapElementInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapElementInfo__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapElementInfo");
        }
        inline app::XmlTypeMapElementInfo* create() {
            return il2cpp::create_object<app::XmlTypeMapElementInfo>(get_class());
        }
    } // namespace XmlTypeMapElementInfo
} // namespace app::classes::types
