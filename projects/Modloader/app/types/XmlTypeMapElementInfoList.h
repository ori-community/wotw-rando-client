#pragma once
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#include <Modloader/app/structs/XmlTypeMapElementInfoList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapElementInfoList {
        inline app::XmlTypeMapElementInfoList__Class** type_info() {
            static app::XmlTypeMapElementInfoList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapElementInfoList__Class**)(modloader::win::memory::resolve_rva(0x047570F0));
            }
            return cache;
        }
        inline app::XmlTypeMapElementInfoList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapElementInfoList__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapElementInfoList");
        }
        inline app::XmlTypeMapElementInfoList* create() {
            return il2cpp::create_object<app::XmlTypeMapElementInfoList>(get_class());
        }
    } // namespace XmlTypeMapElementInfoList
} // namespace app::classes::types
