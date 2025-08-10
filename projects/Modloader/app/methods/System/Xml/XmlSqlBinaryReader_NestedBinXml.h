#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSqlBinaryReader_NestedBinXml.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables.h>

namespace app::classes::System::Xml::XmlSqlBinaryReader_NestedBinXml {
    IL2CPP_REGISTER_METHOD(
        0x01714270,
        void,
        ctor,
        app::XmlSqlBinaryReader_NestedBinXml* this_ptr,
        app::XmlSqlBinaryReader_SymbolTables symbol_tables,
        int32_t doc_state,
        app::XmlSqlBinaryReader_NestedBinXml* next
    )
}
