#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::ZeroOpNode {
    IL2CPP_REGISTER_METHOD(0x030649E0, void, ctor, (app::ZeroOpNode * this_ptr, int32_t op))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Bind, (app::ZeroOpNode * this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list))
    IL2CPP_REGISTER_METHOD(0x030649F0, app::Object*, Eval_1, (app::ZeroOpNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A1590, app::Object*, Eval_2, (app::ZeroOpNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x015A1590, app::Object*, Eval_3, (app::ZeroOpNode * this_ptr, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsConstant, (app::ZeroOpNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsTableConstant, (app::ZeroOpNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (app::ZeroOpNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (app::ZeroOpNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ExpressionNode*, Optimize, (app::ZeroOpNode * this_ptr))
} // namespace app::classes::System::Data::ZeroOpNode
