#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/FunctionId__Enum.h>
#include <Modloader/app/structs/FunctionNode.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::FunctionNode {
    IL2CPP_REGISTER_METHOD(0x01E33B10, void, ctor, app::FunctionNode* this_ptr, app::DataTable* table, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01E33D90, void, AddArgument, app::FunctionNode* this_ptr, app::ExpressionNode* argument)
    IL2CPP_REGISTER_METHOD(0x01E33FF0, void, Bind, app::FunctionNode* this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list)
    IL2CPP_REGISTER_METHOD(0x01E34480, app::Object*, Eval_1, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E344A0, app::Object*, Eval_2, app::FunctionNode* this_ptr, app::DataRow* row, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x01E35240, app::Object*, Eval_3, app::FunctionNode* this_ptr, app::Int32__Array* record_nos)
    IL2CPP_REGISTER_METHOD(0x01E35290, bool, IsConstant, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E35310, bool, IsTableConstant, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E353A0, bool, HasLocalAggregate, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E35430, bool, HasRemoteAggregate, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E354C0, bool, DependsOn, app::FunctionNode* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x01E35560, app::ExpressionNode*, Optimize, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E358F0, app::Type*, GetDataType, app::FunctionNode* this_ptr, app::ExpressionNode* node)
    IL2CPP_REGISTER_METHOD(
        0x01E35BC0,
        app::Object*,
        EvalFunction,
        app::FunctionNode* this_ptr,
        app::FunctionId__Enum id,
        app::Object__Array* argument_values,
        app::DataRow* row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(0x01E37910, app::FunctionId__Enum, get_Aggregate, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E37A10, bool, get_IsAggregate, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E37DC0, void, Check, app::FunctionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E380F0, void, cctor, )
} // namespace app::classes::System::Data::FunctionNode
