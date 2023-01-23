#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NameNode.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/ExpressionNode.h>

namespace app::classes::System::Data::NameNode {
    IL2CPP_REGISTER_METHOD(0x01E44480, void, ctor_1, (app::NameNode * this_ptr, app::DataTable* table, app::Char__Array* text, int32_t start, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::NameNode * this_ptr, app::DataTable* table, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01E444B0, bool, get_IsSqlColumn, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E444D0, void, Bind, (app::NameNode * this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list))
    IL2CPP_REGISTER_METHODINFO(0x0470F3E0, NameNode_Bind__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E446C0, app::Object*, Eval_1, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047338C0, NameNode_Eval__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E44700, app::Object*, Eval_2, (app::NameNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHODINFO(0x0473B598, NameNode_Eval_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E44880, app::Object*, Eval_3, (app::NameNode * this_ptr, app::Int32__Array* records))
    IL2CPP_REGISTER_METHODINFO(0x0476BD68, NameNode_Eval_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E448D0, bool, IsTableConstant, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E44900, bool, HasLocalAggregate, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E44930, bool, HasRemoteAggregate, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E44960, bool, DependsOn, (app::NameNode * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ExpressionNode*, Optimize, (app::NameNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E449C0, app::String*, ParseName, (app::Char__Array * text, int32_t start, int32_t pos))
    IL2CPP_REGISTER_METHODINFO(0x047650D0, NameNode_ParseName__MethodInfo)
} // namespace app::classes::System::Data::NameNode
