#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlByte {
    IL2CPP_REGISTER_METHOD(0x001D66C0, void, ctor_1, (app::SqlByte__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001D66D0, void, ctor_2, (app::SqlByte__Boxed * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D66E0, uint8_t, get_Value, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712F70, SqlByte_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E50760, app::SqlByte, op_Implicit, (uint8_t x))
    IL2CPP_REGISTER_METHOD(0x001D66F0, app::String *, ToString, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E50770, app::SqlByte, op_Addition, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHODINFO(0x0473DED0, SqlByte_op_Addition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E508C0, app::SqlByte, op_Subtraction, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHODINFO(0x04715030, SqlByte_op_Subtraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E50A10, app::SqlByte, op_Multiply, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHODINFO(0x0472AE70, SqlByte_op_Multiply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E50B60, app::SqlByte, op_Division, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHODINFO(0x047680F0, SqlByte_op_Division__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E50C80, app::SqlByte, op_Explicit, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHODINFO(0x047950A8, SqlByte_op_Explicit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E50DB0, app::SqlBoolean, op_Equality, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHOD(0x01E50E90, app::SqlBoolean, op_LessThan, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHOD(0x01E50F70, app::SqlBoolean, op_GreaterThan, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHOD(0x01E51050, app::SqlBoolean, LessThan, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHOD(0x01E51100, app::SqlBoolean, GreaterThan, (app::SqlByte x, app::SqlByte y))
    IL2CPP_REGISTER_METHOD(0x001D6730, app::SqlDouble, ToSqlDouble, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6760, app::SqlInt64, ToSqlInt64, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6790, int32_t, CompareTo_1, (app::SqlByte__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04727740, SqlByte_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D68D0, int32_t, CompareTo_2, (app::SqlByte__Boxed * this_ptr, app::SqlByte value))
    IL2CPP_REGISTER_METHOD(0x001D68E0, bool, Equals, (app::SqlByte__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001D68F0, int32_t, GetHashCode, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlByte__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6920, void, IXmlSerializable_ReadXml, (app::SqlByte__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001D6AA0, void, IXmlSerializable_WriteXml, (app::SqlByte__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x01E516A0, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x01E517F0, void, cctor, ())
    inline app::SqlByte operator + (app::SqlByte x, app::SqlByte y) {
        return op_Addition(x, y);
    }
    inline app::SqlByte operator - (app::SqlByte x, app::SqlByte y) {
        return op_Subtraction(x, y);
    }
    inline app::SqlByte operator * (app::SqlByte x, app::SqlByte y) {
        return op_Multiply(x, y);
    }
    inline app::SqlByte operator / (app::SqlByte x, app::SqlByte y) {
        return op_Division(x, y);
    }
    inline app::SqlBoolean operator == (app::SqlByte x, app::SqlByte y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator < (app::SqlByte x, app::SqlByte y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator > (app::SqlByte x, app::SqlByte y) {
        return op_GreaterThan(x, y);
    }
}
