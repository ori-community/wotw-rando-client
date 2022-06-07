#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlSingle {
    IL2CPP_REGISTER_METHOD(0x001E49E0, void, ctor_1, (app::SqlSingle__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E5B40, void, ctor_2, (app::SqlSingle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHODINFO(0x04770CB8, SqlSingle__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E5B50, void, ctor_3, (app::SqlSingle__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E5B60, float, get_Value, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477DDE8, SqlSingle_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B8640, app::SqlSingle, op_Implicit_1, (float x))
    IL2CPP_REGISTER_METHOD(0x001E5B70, app::String *, ToString, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B8670, app::SqlSingle, op_UnaryNegation, (app::SqlSingle x))
    IL2CPP_REGISTER_METHOD(0x022B8760, app::SqlSingle, op_Addition, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHODINFO(0x04750D80, SqlSingle_op_Addition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B88B0, app::SqlSingle, op_Subtraction, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHODINFO(0x0471AB80, SqlSingle_op_Subtraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B8A00, app::SqlSingle, op_Multiply, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHODINFO(0x04717488, SqlSingle_op_Multiply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B8B50, app::SqlSingle, op_Division, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHODINFO(0x04731F08, SqlSingle_op_Division__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022B8CF0, app::SqlSingle, op_Implicit_2, (app::SqlByte x))
    IL2CPP_REGISTER_METHOD(0x022B8E30, app::SqlSingle, op_Implicit_3, (app::SqlInt16 x))
    IL2CPP_REGISTER_METHOD(0x022B8F70, app::SqlSingle, op_Implicit_4, (app::SqlInt32 x))
    IL2CPP_REGISTER_METHOD(0x022B90B0, app::SqlSingle, op_Implicit_5, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHOD(0x022B9190, app::SqlSingle, op_Implicit_6, (app::SqlMoney x))
    IL2CPP_REGISTER_METHOD(0x022B9270, app::SqlSingle, op_Implicit_7, (app::SqlDecimal x))
    IL2CPP_REGISTER_METHOD(0x022B9360, app::SqlSingle, op_Explicit, (app::SqlDouble x))
    IL2CPP_REGISTER_METHOD(0x022B9440, app::SqlBoolean, op_Equality, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHOD(0x022B9530, app::SqlBoolean, op_LessThan, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHOD(0x022B9610, app::SqlBoolean, op_GreaterThan, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHOD(0x022B96F0, app::SqlBoolean, LessThan, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHOD(0x022B97A0, app::SqlBoolean, GreaterThan, (app::SqlSingle x, app::SqlSingle y))
    IL2CPP_REGISTER_METHOD(0x001E5BC0, app::SqlDouble, ToSqlDouble, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E5BF0, int32_t, CompareTo_1, (app::SqlSingle__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0475BD48, SqlSingle_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E5D30, int32_t, CompareTo_2, (app::SqlSingle__Boxed * this_ptr, app::SqlSingle value))
    IL2CPP_REGISTER_METHOD(0x001E5D40, bool, Equals, (app::SqlSingle__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001E5D50, int32_t, GetHashCode, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlSingle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E5D90, void, IXmlSerializable_ReadXml, (app::SqlSingle__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001E5EF0, void, IXmlSerializable_WriteXml, (app::SqlSingle__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x022B9CA0, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022B9DF0, void, cctor, ())
    inline app::SqlSingle operator - (app::SqlSingle x) {
        return op_UnaryNegation(x);
    }
    inline app::SqlSingle operator + (app::SqlSingle x, app::SqlSingle y) {
        return op_Addition(x, y);
    }
    inline app::SqlSingle operator - (app::SqlSingle x, app::SqlSingle y) {
        return op_Subtraction(x, y);
    }
    inline app::SqlSingle operator * (app::SqlSingle x, app::SqlSingle y) {
        return op_Multiply(x, y);
    }
    inline app::SqlSingle operator / (app::SqlSingle x, app::SqlSingle y) {
        return op_Division(x, y);
    }
    inline app::SqlBoolean operator == (app::SqlSingle x, app::SqlSingle y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator < (app::SqlSingle x, app::SqlSingle y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator > (app::SqlSingle x, app::SqlSingle y) {
        return op_GreaterThan(x, y);
    }
}
