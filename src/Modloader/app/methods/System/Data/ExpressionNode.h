#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/StorageType__Enum.h>

namespace app::classes::System::Data::ExpressionNode {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ExpressionNode* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F5A650, app::IFormatProvider*, get_FormatProvider, app::ExpressionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSqlColumn, app::ExpressionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DataTable*, get_table, app::ExpressionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, BindTable, app::ExpressionNode* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DependsOn, app::ExpressionNode* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x01F5A710, bool, IsInteger, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A730, bool, IsIntegerSql, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A750, bool, IsSigned, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A770, bool, IsSignedSql, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A7B0, bool, IsUnsigned, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A7D0, bool, IsUnsignedSql, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A7F0, bool, IsNumeric, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A820, bool, IsNumericSql, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A860, bool, IsFloat, app::StorageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F5A880, bool, IsFloatSql, app::StorageType__Enum type)
} // namespace app::classes::System::Data::ExpressionNode
