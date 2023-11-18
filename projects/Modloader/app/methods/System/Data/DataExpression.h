#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataExpression.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::DataExpression {
    IL2CPP_REGISTER_METHOD(0x0239FA60, void, ctor_1, (app::DataExpression * this_ptr, app::DataTable* table, app::String* expression))
    IL2CPP_REGISTER_METHOD(0x0239FA80, void, ctor_2, (app::DataExpression * this_ptr, app::DataTable* table, app::String* expression, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0239FDF0, app::String*, get_Expression, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00519280, bool, get_HasValue, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0239FE80, void, Bind, (app::DataExpression * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x023A0050, bool, DependsOn, (app::DataExpression * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x023A0070, app::Object*, Evaluate_1, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A0080, app::Object*, Evaluate_2, (app::DataExpression * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x023A0290, bool, Invoke, (app::DataExpression * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::DataColumn__Array*, GetDependency, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A03B0, bool, IsTableAggregate, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A03D0, bool, IsUnknown, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x023A0470, bool, HasLocalAggregate, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A0490, bool, HasRemoteAggregate, (app::DataExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A04B0, bool, ToBoolean, (app::Object * value))
} // namespace app::classes::System::Data::DataExpression
