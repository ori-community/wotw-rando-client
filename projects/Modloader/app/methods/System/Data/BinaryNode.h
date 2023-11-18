#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryNode.h>
#include <Modloader/app/structs/BinaryNode_DataTypePrecedence__Enum.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StorageType__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::BinaryNode {
    IL2CPP_REGISTER_METHOD(0x01E3FFB0, void, ctor, (app::BinaryNode * this_ptr, app::DataTable* table, int32_t op, app::ExpressionNode* left, app::ExpressionNode* right))
    IL2CPP_REGISTER_METHOD(0x0214A8D0, void, Bind, (app::BinaryNode * this_ptr, app::DataTable* table, app::List_1_System_Data_DataColumn_* list))
    IL2CPP_REGISTER_METHOD(0x01E34480, app::Object*, Eval_1, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214A940, app::Object*, Eval_2, (app::BinaryNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x0214A970, app::Object*, Eval_3, (app::BinaryNode * this_ptr, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x0214A9B0, bool, IsConstant, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214AA10, bool, IsTableConstant, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214AA70, bool, HasLocalAggregate, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214AAD0, bool, HasRemoteAggregate, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214AB30, bool, DependsOn, (app::BinaryNode * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x0214ABA0, app::ExpressionNode*, Optimize, (app::BinaryNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214B1A0, void, SetTypeMismatchError, (app::BinaryNode * this_ptr, int32_t op, app::Type* left, app::Type* right))
    IL2CPP_REGISTER_METHOD(0x0214B200, app::Object*, Eval_4, (app::ExpressionNode * expr, app::DataRow* row, app::DataRowVersion__Enum version, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x0214B250, int32_t, BinaryCompare_1, (app::BinaryNode * this_ptr, app::Object* v_left, app::Object* v_right, app::StorageType__Enum result_type, int32_t op))
    IL2CPP_REGISTER_METHOD(0x0214B280, int32_t, BinaryCompare_2, (app::BinaryNode * this_ptr, app::Object* v_left, app::Object* v_right, app::StorageType__Enum result_type, int32_t op, app::CompareInfo* comparer))
    IL2CPP_REGISTER_METHOD(0x0214BEF0, app::Object*, EvalBinaryOp, (app::BinaryNode * this_ptr, int32_t op, app::ExpressionNode* left, app::ExpressionNode* right, app::DataRow* row, app::DataRowVersion__Enum version, app::Int32__Array* record_nos))
    IL2CPP_REGISTER_METHOD(0x021508E0, app::BinaryNode_DataTypePrecedence__Enum, GetPrecedence, (app::BinaryNode * this_ptr, app::StorageType__Enum storage_type))
    IL2CPP_REGISTER_METHOD(0x02150A70, app::StorageType__Enum, GetPrecedenceType, (app::BinaryNode_DataTypePrecedence__Enum code))
    IL2CPP_REGISTER_METHOD(0x02150BE0, bool, IsMixed, (app::BinaryNode * this_ptr, app::StorageType__Enum left, app::StorageType__Enum right))
    IL2CPP_REGISTER_METHOD(0x02150C50, bool, IsMixedSql, (app::BinaryNode * this_ptr, app::StorageType__Enum left, app::StorageType__Enum right))
    IL2CPP_REGISTER_METHOD(0x02150CE0, app::StorageType__Enum, ResultType, (app::BinaryNode * this_ptr, app::StorageType__Enum left, app::StorageType__Enum right, bool lc, bool rc, int32_t op))
    IL2CPP_REGISTER_METHOD(0x021510E0, app::StorageType__Enum, ResultSqlType, (app::BinaryNode * this_ptr, app::StorageType__Enum left, app::StorageType__Enum right, bool lc, bool rc, int32_t op))
    IL2CPP_REGISTER_METHOD(0x021515C0, int32_t, SqlResultType, (app::BinaryNode * this_ptr, int32_t type_code))
} // namespace app::classes::System::Data::BinaryNode
