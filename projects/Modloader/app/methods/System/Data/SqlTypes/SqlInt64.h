#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlInt64__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlByte.h>
#include <Modloader/app/structs/SqlDecimal.h>
#include <Modloader/app/structs/SqlDouble.h>
#include <Modloader/app/structs/SqlInt16.h>
#include <Modloader/app/structs/SqlInt32.h>
#include <Modloader/app/structs/SqlInt64.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::SqlTypes::SqlInt64 {
    IL2CPP_REGISTER_METHOD(0x001E3B70, void, ctor_1, (app::SqlInt64__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E4F10, void, ctor_2, (app::SqlInt64__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4F20, int64_t, get_Value, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B3C70, app::SqlInt64, op_Implicit_1, (int64_t x))
    IL2CPP_REGISTER_METHOD(0x001E4F30, app::String*, ToString, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B3C80, app::SqlInt64, op_UnaryNegation, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHOD(0x022B3D80, app::SqlInt64, op_Addition, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B3F40, app::SqlInt64, op_Subtraction, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B4100, app::SqlInt64, op_Multiply, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B4400, app::SqlInt64, op_Division, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B45C0, app::SqlInt64, op_Modulus, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B4780, app::SqlInt64, op_Implicit_2, (app::SqlByte x))
    IL2CPP_REGISTER_METHOD(0x022B48C0, app::SqlInt64, op_Implicit_3, (app::SqlInt16 x))
    IL2CPP_REGISTER_METHOD(0x022B4A00, app::SqlInt64, op_Implicit_4, (app::SqlInt32 x))
    IL2CPP_REGISTER_METHOD(0x022B4B40, app::SqlInt64, op_Explicit, (app::SqlDecimal x))
    IL2CPP_REGISTER_METHOD(0x022B4D90, bool, SameSignLong, (int64_t x, int64_t y))
    IL2CPP_REGISTER_METHOD(0x022B4DB0, app::SqlBoolean, op_Equality, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B4EA0, app::SqlBoolean, op_LessThan, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B4F90, app::SqlBoolean, op_GreaterThan, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B5080, app::SqlBoolean, LessThan, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x022B5140, app::SqlBoolean, GreaterThan, (app::SqlInt64 x, app::SqlInt64 y))
    IL2CPP_REGISTER_METHOD(0x001E4F70, app::SqlByte, ToSqlByte, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4F80, app::SqlDouble, ToSqlDouble, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4FB0, app::SqlInt16, ToSqlInt16, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4FC0, app::SqlInt32, ToSqlInt32, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4FD0, app::SqlDecimal, ToSqlDecimal, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E5000, int32_t, CompareTo_1, (app::SqlInt64__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001E5150, int32_t, CompareTo_2, (app::SqlInt64__Boxed * this_ptr, app::SqlInt64 value))
    IL2CPP_REGISTER_METHOD(0x001E5170, bool, Equals, (app::SqlInt64__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001E5180, int32_t, GetHashCode, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E51B0, void, IXmlSerializable_ReadXml, (app::SqlInt64__Boxed * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x001E5330, void, IXmlSerializable_WriteXml, (app::SqlInt64__Boxed * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x022B5DF0, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022B5F40, void, cctor, ())
    inline app::SqlInt64 operator-(app::SqlInt64 x) {
        return op_UnaryNegation(x);
    }
    inline app::SqlInt64 operator+(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Addition(x, y);
    }
    inline app::SqlInt64 operator-(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Subtraction(x, y);
    }
    inline app::SqlInt64 operator*(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Multiply(x, y);
    }
    inline app::SqlInt64 operator/(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Division(x, y);
    }
    inline app::SqlInt64 operator%(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Modulus(x, y);
    }
    inline app::SqlBoolean operator==(app::SqlInt64 x, app::SqlInt64 y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator<(app::SqlInt64 x, app::SqlInt64 y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator>(app::SqlInt64 x, app::SqlInt64 y) {
        return op_GreaterThan(x, y);
    }
} // namespace app::classes::System::Data::SqlTypes::SqlInt64
