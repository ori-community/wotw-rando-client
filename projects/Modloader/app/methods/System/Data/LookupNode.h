#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LookupNode.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::LookupNode {
    IL2CPP_REGISTER_METHOD(0x01E40A50, void, ctor, (app::LookupNode * this_ptr, app::DataTable* table, app::String* column_name, app::String* relation_name))
    IL2CPP_REGISTER_METHOD(0x01E40A60, void, Bind, (app::LookupNode * this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list))
    IL2CPP_REGISTER_METHOD(0x01E40D10, app::Object*, Eval_1, (app::LookupNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E40D50, app::Object*, Eval_2, (app::LookupNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x01E40EB0, app::Object*, Eval_3, (app::LookupNode * this_ptr, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (app::LookupNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsTableConstant, (app::LookupNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (app::LookupNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (app::LookupNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E40F00, bool, DependsOn, (app::LookupNode * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ExpressionNode*, Optimize, (app::LookupNode * this_ptr))
} // namespace app::classes::System::Data::LookupNode
