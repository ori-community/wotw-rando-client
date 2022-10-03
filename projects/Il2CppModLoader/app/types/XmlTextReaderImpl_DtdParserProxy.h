#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_DtdParserProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_DtdParserProxy__Class** type_info;
        inline app::XmlTextReaderImpl_DtdParserProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_DtdParserProxy__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "DtdParserProxy");
        }
        inline app::XmlTextReaderImpl_DtdParserProxy* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_DtdParserProxy>(get_class());
        }
    } // namespace XmlTextReaderImpl_DtdParserProxy
} // namespace app::classes::types
