#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlBinary.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlByte.h>
#include <Modloader/app/structs/SqlBytes.h>
#include <Modloader/app/structs/SqlChars.h>
#include <Modloader/app/structs/SqlDateTime.h>
#include <Modloader/app/structs/SqlDecimal.h>
#include <Modloader/app/structs/SqlDouble.h>
#include <Modloader/app/structs/SqlGuid.h>
#include <Modloader/app/structs/SqlInt16.h>
#include <Modloader/app/structs/SqlInt32.h>
#include <Modloader/app/structs/SqlInt64.h>
#include <Modloader/app/structs/SqlMoney.h>
#include <Modloader/app/structs/SqlSingle.h>
#include <Modloader/app/structs/SqlString.h>
#include <Modloader/app/structs/StorageType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::Common::SqlConvert {
    IL2CPP_REGISTER_METHOD(0x028489B0, app::SqlByte, ConvertToSqlByte, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02848BC0, app::SqlInt16, ConvertToSqlInt16, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02848FC0, app::SqlInt32, ConvertToSqlInt32, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x028495C0, app::SqlInt64, ConvertToSqlInt64, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02849B10, app::SqlDouble, ConvertToSqlDouble, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284A330, app::SqlDecimal, ConvertToSqlDecimal, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284AD60, app::SqlSingle, ConvertToSqlSingle, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284B920, app::SqlMoney, ConvertToSqlMoney, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284C380, app::SqlDateTime, ConvertToSqlDateTime, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284C5C0, app::SqlBoolean, ConvertToSqlBoolean, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284C7C0, app::SqlGuid, ConvertToSqlGuid, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284C9D0, app::SqlBinary, ConvertToSqlBinary, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284CC00, app::SqlString, ConvertToSqlString, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284CE40, app::SqlChars*, ConvertToSqlChars, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284CFC0, app::SqlBytes*, ConvertToSqlBytes, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0284D140, app::DateTimeOffset, ConvertStringToDateTimeOffset, app::String* value, app::IFormatProvider* format_provider)
    IL2CPP_REGISTER_METHOD(0x0284D210, app::Object*, ChangeTypeForDefaultValue, app::Object* value, app::Type* type, app::IFormatProvider* format_provider)
    IL2CPP_REGISTER_METHOD(
        0x0284D410,
        app::Object*,
        ChangeType2,
        app::Object* value,
        app::StorageType__Enum stype,
        app::Type* type,
        app::IFormatProvider* format_provider
    )
    IL2CPP_REGISTER_METHOD(0x0284E9E0, app::Object*, ChangeTypeForXML, app::Object* value, app::Type* type)
} // namespace app::classes::System::Data::Common::SqlConvert
