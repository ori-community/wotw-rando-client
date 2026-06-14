#pragma once
#include <Modloader/app/structs/XmlSchemaXPath.h>
#include <Modloader/app/structs/XmlSchemaXPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaXPath {
        inline app::XmlSchemaXPath__Class** type_info() {
            static app::XmlSchemaXPath__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaXPath__Class**)(modloader::win::memory::resolve_rva(0x0476B408));
            }
            return cache;
        }
        inline app::XmlSchemaXPath__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaXPath__Class>(type_info(), "System.Xml.Schema", "XmlSchemaXPath");
        }
        inline app::XmlSchemaXPath* create() {
            return il2cpp::create_object<app::XmlSchemaXPath>(get_class());
        }
    } // namespace XmlSchemaXPath
} // namespace app::classes::types
