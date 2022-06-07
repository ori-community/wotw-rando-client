#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlInt16 {
    IL2CPP_REGISTER_METHOD(0x001E4470, void, ctor_1, (app::SqlInt16__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E4480, void, ctor_2, (app::SqlInt16__Boxed * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4490, int16_t, get_Value, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C578, SqlInt16_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B1100, app::SqlInt16, op_Implicit_1, (int16_t x))
    IL2CPP_REGISTER_METHOD(0x001E44A0, app::String *, ToString, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B1120, app::SqlInt16, op_UnaryNegation, (app::SqlInt16 x))
    IL2CPP_REGISTER_METHOD(0x022B1200, app::SqlInt16, op_Addition, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHODINFO(0x04781548, SqlInt16_op_Addition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B1330, app::SqlInt16, op_Subtraction, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHODINFO(0x04783600, SqlInt16_op_Subtraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B1460, app::SqlInt16, op_Multiply, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHODINFO(0x04711930, SqlInt16_op_Multiply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B15F0, app::SqlInt16, op_Division, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHODINFO(0x0474B8B8, SqlInt16_op_Division__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B1770, app::SqlInt16, op_Implicit_2, (app::SqlByte x))
    IL2CPP_REGISTER_METHOD(0x022B18A0, app::SqlInt16, op_Explicit, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHODINFO(0x04785480, SqlInt16_op_Explicit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B19C0, app::SqlBoolean, op_Equality, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHOD(0x022B1A90, app::SqlBoolean, op_LessThan, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHOD(0x022B1B60, app::SqlBoolean, op_GreaterThan, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHOD(0x022B1C30, app::SqlBoolean, LessThan, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHOD(0x022B1CE0, app::SqlBoolean, GreaterThan, (app::SqlInt16 x, app::SqlInt16 y))
    IL2CPP_REGISTER_METHOD(0x001E44E0, app::SqlDouble, ToSqlDouble, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4510, app::SqlInt64, ToSqlInt64, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4540, int32_t, CompareTo_1, (app::SqlInt16__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047251F0, SqlInt16_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E4680, int32_t, CompareTo_2, (app::SqlInt16__Boxed * this_ptr, app::SqlInt16 value))
    IL2CPP_REGISTER_METHOD(0x001E4690, bool, Equals, (app::SqlInt16__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001E46A0, int32_t, GetHashCode, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E46D0, void, IXmlSerializable_ReadXml, (app::SqlInt16__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001E4850, void, IXmlSerializable_WriteXml, (app::SqlInt16__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x022B2260, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022B23B0, void, cctor, ())
    inline app::SqlInt16 operator - (app::SqlInt16 x) {
        return op_UnaryNegation(x);
    }
    inline app::SqlInt16 operator + (app::SqlInt16 x, app::SqlInt16 y) {
        return op_Addition(x, y);
    }
    inline app::SqlInt16 operator - (app::SqlInt16 x, app::SqlInt16 y) {
        return op_Subtraction(x, y);
    }
    inline app::SqlInt16 operator * (app::SqlInt16 x, app::SqlInt16 y) {
        return op_Multiply(x, y);
    }
    inline app::SqlInt16 operator / (app::SqlInt16 x, app::SqlInt16 y) {
        return op_Division(x, y);
    }
    inline app::SqlBoolean operator == (app::SqlInt16 x, app::SqlInt16 y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator < (app::SqlInt16 x, app::SqlInt16 y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator > (app::SqlInt16 x, app::SqlInt16 y) {
        return op_GreaterThan(x, y);
    }
}
