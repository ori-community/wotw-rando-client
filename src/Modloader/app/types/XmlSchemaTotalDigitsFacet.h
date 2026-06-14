#pragma once
#include <Modloader/app/structs/XmlSchemaTotalDigitsFacet.h>
#include <Modloader/app/structs/XmlSchemaTotalDigitsFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaTotalDigitsFacet {
        inline app::XmlSchemaTotalDigitsFacet__Class** type_info() {
            static app::XmlSchemaTotalDigitsFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaTotalDigitsFacet__Class**)(modloader::win::memory::resolve_rva(0x0474A3A8));
            }
            return cache;
        }
        inline app::XmlSchemaTotalDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaTotalDigitsFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaTotalDigitsFacet");
        }
        inline app::XmlSchemaTotalDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaTotalDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaTotalDigitsFacet
} // namespace app::classes::types
