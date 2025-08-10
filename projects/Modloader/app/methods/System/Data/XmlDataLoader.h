#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDataLoader.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Data::XmlDataLoader {
    IL2CPP_REGISTER_METHOD(0x023E8760, void, ctor_1, app::XmlDataLoader* this_ptr, app::DataSet* dataset, bool is_xdr, bool ignore_schema)
    IL2CPP_REGISTER_METHOD(
        0x023E88E0,
        void,
        ctor_2,
        app::XmlDataLoader* this_ptr,
        app::DataSet* dataset,
        bool is_xdr,
        app::XmlElement* top_node,
        bool ignore_schema
    )
    IL2CPP_REGISTER_METHOD(0x023E8BA0, void, ctor_3, app::XmlDataLoader* this_ptr, app::DataTable* datatable, bool is_xdr, bool ignore_schema)
    IL2CPP_REGISTER_METHOD(
        0x023E8D20,
        void,
        ctor_4,
        app::XmlDataLoader* this_ptr,
        app::DataTable* datatable,
        bool is_xdr,
        app::XmlElement* top_node,
        bool ignore_schema
    )
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_FromInference, app::XmlDataLoader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_FromInference, app::XmlDataLoader* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x023E8FE0, void, AttachRows, app::XmlDataLoader* this_ptr, app::DataRow* parent_row, app::XmlNode* parent_element)
    IL2CPP_REGISTER_METHOD(0x023E9180, int32_t, CountNonNSAttributes, app::XmlDataLoader* this_ptr, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x023E9380, app::String*, GetValueForTextOnlyColums, app::XmlDataLoader* this_ptr, app::XmlNode* n)
    IL2CPP_REGISTER_METHOD(0x023E96E0, app::String*, GetInitialTextFromNodes, app::XmlDataLoader* this_ptr, app::XmlNode** n)
    IL2CPP_REGISTER_METHOD(0x023E9AB0, app::DataColumn*, GetTextOnlyColumn, app::XmlDataLoader* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x023E9B80, app::DataRow*, GetRowFromElement, app::XmlDataLoader* this_ptr, app::XmlElement* e)
    IL2CPP_REGISTER_METHOD(0x023E9C80, bool, FColumnElement, app::XmlDataLoader* this_ptr, app::XmlElement* e)
    IL2CPP_REGISTER_METHOD(0x023E9DD0, bool, FExcludedNamespace, app::XmlDataLoader* this_ptr, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x023E9EB0, bool, FIgnoreNamespace_1, app::XmlDataLoader* this_ptr, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x023EA100, bool, FIgnoreNamespace_2, app::XmlDataLoader* this_ptr, app::XmlReader* node)
    IL2CPP_REGISTER_METHOD(0x023EA2A0, bool, IsTextLikeNode, app::XmlDataLoader* this_ptr, app::XmlNodeType__Enum n)
    IL2CPP_REGISTER_METHOD(0x023EA350, bool, IsTextOnly, app::XmlDataLoader* this_ptr, app::DataColumn* c)
    IL2CPP_REGISTER_METHOD(0x023EA380, void, LoadData_1, app::XmlDataLoader* this_ptr, app::XmlDocument* xdoc)
    IL2CPP_REGISTER_METHOD(0x023EA870, void, LoadRowData, app::XmlDataLoader* this_ptr, app::DataRow* row, app::XmlElement* row_element)
    IL2CPP_REGISTER_METHOD(0x023EB570, void, LoadRows, app::XmlDataLoader* this_ptr, app::DataRow* parent_row, app::XmlNode* parent_element)
    IL2CPP_REGISTER_METHOD(
        0x023EB990,
        void,
        SetRowValueFromXmlText,
        app::XmlDataLoader* this_ptr,
        app::DataRow* row,
        app::DataColumn* col,
        app::String* xml_text
    )
    IL2CPP_REGISTER_METHOD(0x023EBA10, void, InitNameTable, app::XmlDataLoader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023EBC50, void, LoadData_2, app::XmlDataLoader* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x023EC200, void, LoadTopMostTable, app::XmlDataLoader* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x023ECC70, void, LoadTable, app::XmlDataLoader* this_ptr, app::DataTable* table, bool is_nested)
    IL2CPP_REGISTER_METHOD(0x023EDD20, void, LoadColumn, app::XmlDataLoader* this_ptr, app::DataColumn* column, app::Object__Array* found_columns)
    IL2CPP_REGISTER_METHOD(0x023EEA80, bool, ProcessXsdSchema, app::XmlDataLoader* this_ptr)
} // namespace app::classes::System::Data::XmlDataLoader
