#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::XmlDataTreeWriter {
    IL2CPP_REGISTER_METHOD(0x023EEEB0, void, ctor_1, (app::XmlDataTreeWriter * this_ptr, app::DataSet* ds))
    IL2CPP_REGISTER_METHOD(0x023EF200, void, ctor_2, (app::XmlDataTreeWriter * this_ptr, app::DataTable* dt, bool write_hierarchy))
    IL2CPP_REGISTER_METHOD(0x023EF4C0, app::DataTable__Array*, CreateToplevelTables, (app::XmlDataTreeWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023EF8C0, void, CreateTablesHierarchy, (app::XmlDataTreeWriter * this_ptr, app::DataTable* dt))
    IL2CPP_REGISTER_METHOD(0x023EFBD0, bool, RowHasErrors, (app::DataRow * row))
    IL2CPP_REGISTER_METHOD(0x023EFCE0, void, SaveDiffgramData, (app::XmlDataTreeWriter * this_ptr, app::XmlWriter* xw, app::Hashtable* rows_order))
    IL2CPP_REGISTER_METHODINFO(0x0475D2C0, XmlDataTreeWriter_SaveDiffgramData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023F02B0, void, Save, (app::XmlDataTreeWriter * this_ptr, app::XmlWriter* xw, bool write_schema))
    IL2CPP_REGISTER_METHODINFO(0x0478C658, XmlDataTreeWriter_Save__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023F0C00, app::ArrayList*, GetNestedChildRelations, (app::XmlDataTreeWriter * this_ptr, app::DataRow* row))
    IL2CPP_REGISTER_METHOD(0x023F0F70, void, XmlDataRowWriter, (app::XmlDataTreeWriter * this_ptr, app::DataRow* row, app::String* encoded_table_name))
    IL2CPP_REGISTER_METHODINFO(0x04704D88, XmlDataTreeWriter_XmlDataRowWriter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023F2390, bool, PreserveSpace, (app::Object * value))
} // namespace app::classes::System::Data::XmlDataTreeWriter
