#pragma once
#include <Modloader/app/structs/XmlSchemaInfo.h>
#include <Modloader/app/structs/XmlSchemaInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInfo {
        inline app::XmlSchemaInfo__Class** type_info() {
            static app::XmlSchemaInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x047418D0));
            }
            return cache;
        }
        inline app::XmlSchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInfo__Class>(type_info(), "System.Xml.Schema", "XmlSchemaInfo");
        }
        inline app::XmlSchemaInfo* create() {
            return il2cpp::create_object<app::XmlSchemaInfo>(get_class());
        }
    } // namespace XmlSchemaInfo
} // namespace app::classes::types
