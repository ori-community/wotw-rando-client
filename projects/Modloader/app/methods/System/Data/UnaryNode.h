#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::UnaryNode {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::UnaryNode * this_ptr, app::DataTable* table, int32_t op, app::ExpressionNode* right))
    IL2CPP_REGISTER_METHOD(0x022BE950, void, Bind, (app::UnaryNode * this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list))
    IL2CPP_REGISTER_METHOD(0x01E34480, app::Object*, Eval_1, (app::UnaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BE980, app::Object*, Eval_2, (app::UnaryNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x022BE9D0, app::Object*, Eval_3, (app::UnaryNode * this_ptr, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x022BEA00, app::Object*, EvalUnaryOp, (app::UnaryNode * this_ptr, int32_t op, app::Object* vl))
    IL2CPP_REGISTER_METHODINFO(0x0475ADC0, UnaryNode_EvalUnaryOp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BF7B0, bool, IsConstant, (app::UnaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BF7E0, bool, IsTableConstant, (app::UnaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BF810, bool, HasLocalAggregate, (app::UnaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BF840, bool, HasRemoteAggregate, (app::UnaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BF870, bool, DependsOn, (app::UnaryNode * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x022BF8A0, app::ExpressionNode*, Optimize, (app::UnaryNode * this_ptr))
} // namespace app::classes::System::Data::UnaryNode
