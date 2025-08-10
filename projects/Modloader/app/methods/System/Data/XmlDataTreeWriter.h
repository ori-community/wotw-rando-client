#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDataTreeWriter.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::XmlDataTreeWriter {
    IL2CPP_REGISTER_METHOD(0x023EEEB0, void, ctor_1, app::XmlDataTreeWriter* this_ptr, app::DataSet* ds)
    IL2CPP_REGISTER_METHOD(0x023EF200, void, ctor_2, app::XmlDataTreeWriter* this_ptr, app::DataTable* dt, bool write_hierarchy)
    IL2CPP_REGISTER_METHOD(0x023EF4C0, app::DataTable__Array*, CreateToplevelTables, app::XmlDataTreeWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023EF8C0, void, CreateTablesHierarchy, app::XmlDataTreeWriter* this_ptr, app::DataTable* dt)
    IL2CPP_REGISTER_METHOD(0x023EFBD0, bool, RowHasErrors, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x023EFCE0, void, SaveDiffgramData, app::XmlDataTreeWriter* this_ptr, app::XmlWriter* xw, app::Hashtable* rows_order)
    IL2CPP_REGISTER_METHOD(0x023F02B0, void, Save, app::XmlDataTreeWriter* this_ptr, app::XmlWriter* xw, bool write_schema)
    IL2CPP_REGISTER_METHOD(0x023F0C00, app::ArrayList*, GetNestedChildRelations, app::XmlDataTreeWriter* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x023F0F70, void, XmlDataRowWriter, app::XmlDataTreeWriter* this_ptr, app::DataRow* row, app::String* encoded_table_name)
    IL2CPP_REGISTER_METHOD(0x023F2390, bool, PreserveSpace, app::Object* value)
} // namespace app::classes::System::Data::XmlDataTreeWriter
