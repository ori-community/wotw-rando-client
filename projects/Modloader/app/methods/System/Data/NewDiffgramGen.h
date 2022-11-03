#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::NewDiffgramGen {
    IL2CPP_REGISTER_METHOD(0x01E44CB0, void, ctor_1, (app::NewDiffgramGen * this_ptr, app::DataSet* ds))
    IL2CPP_REGISTER_METHOD(0x01E44F60, void, ctor_2, (app::NewDiffgramGen * this_ptr, app::DataTable* dt, bool write_hierarchy))
    IL2CPP_REGISTER_METHOD(0x01E451E0, void, CreateTableHierarchy, (app::NewDiffgramGen * this_ptr, app::DataTable* dt))
    IL2CPP_REGISTER_METHOD(0x01E454F0, void, DoAssignments, (app::NewDiffgramGen * this_ptr, app::ArrayList* tables))
    IL2CPP_REGISTER_METHOD(0x01E45940, bool, EmptyData, (app::NewDiffgramGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E45B00, void, Save_1, (app::NewDiffgramGen * this_ptr, app::XmlWriter* xmlw))
    IL2CPP_REGISTER_METHOD(0x01E45B10, void, Save_2, (app::NewDiffgramGen * this_ptr, app::XmlWriter* xmlw, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x01E461E0, void, GenerateTable, (app::NewDiffgramGen * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x01E46270, void, GenerateTableErrors, (app::NewDiffgramGen * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x01E468E0, void, GenerateRow, (app::NewDiffgramGen * this_ptr, app::DataRow* row))
    IL2CPP_REGISTER_METHOD(0x01E47100, void, GenerateColumn, (app::NewDiffgramGen * this_ptr, app::DataRow* row, app::DataColumn* col, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHODINFO(0x04785A18, NewDiffgramGen_GenerateColumn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E47BA0, app::String*, QualifiedName, (app::String * prefix, app::String* name))
} // namespace app::classes::System::Data::NewDiffgramGen
