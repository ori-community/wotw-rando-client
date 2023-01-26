#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_DtdParserProxy.h>
#include <Modloader/app/structs/XmlTextReaderImpl_DtdParserProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_DtdParserProxy {
        inline app::XmlTextReaderImpl_DtdParserProxy__Class** type_info() {
            static app::XmlTextReaderImpl_DtdParserProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextReaderImpl_DtdParserProxy__Class**)(modloader::win::memory::resolve_rva(0x047431E8));
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_DtdParserProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_DtdParserProxy__Class>(type_info(), "System.Xml", "XmlTextReaderImpl", "DtdParserProxy");
        }
        inline app::XmlTextReaderImpl_DtdParserProxy* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_DtdParserProxy>(get_class());
        }
    } // namespace XmlTextReaderImpl_DtdParserProxy
} // namespace app::classes::types
