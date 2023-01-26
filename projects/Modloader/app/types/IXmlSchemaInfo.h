#pragma once
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/IXmlSchemaInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlSchemaInfo {
        inline app::IXmlSchemaInfo__Class** type_info() {
            static app::IXmlSchemaInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlSchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B3C8));
            }
            return cache;
        }
        inline app::IXmlSchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::IXmlSchemaInfo__Class>(type_info(), "System.Xml.Schema", "IXmlSchemaInfo");
        }
    } // namespace IXmlSchemaInfo
} // namespace app::classes::types
