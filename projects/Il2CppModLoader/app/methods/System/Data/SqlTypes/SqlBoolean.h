#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlBoolean {
    IL2CPP_REGISTER_METHOD(0x001D6160, void, ctor_1, (app::SqlBoolean__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x001D6170, void, ctor_2, (app::SqlBoolean__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001D6180, void, ctor_3, (app::SqlBoolean__Boxed * this_ptr, int32_t value, bool f_null))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D61A0, bool, get_Value, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790E20, SqlBoolean_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D61B0, bool, get_IsTrue, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D61C0, bool, get_IsFalse, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4FB10, app::SqlBoolean, op_Implicit, (bool x))
    IL2CPP_REGISTER_METHOD(0x01E4FB20, bool, op_True, (app::SqlBoolean x))
    IL2CPP_REGISTER_METHOD(0x01E4FB30, app::SqlBoolean, op_BitwiseAnd, (app::SqlBoolean x, app::SqlBoolean y))
    IL2CPP_REGISTER_METHOD(0x01E4FC80, app::SqlBoolean, op_BitwiseOr, (app::SqlBoolean x, app::SqlBoolean y))
    IL2CPP_REGISTER_METHOD(0x001D61D0, uint8_t, get_ByteValue, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047694E8, SqlBoolean_get_ByteValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D61E0, app::String *, ToString, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4FE80, app::SqlBoolean, op_Equality, (app::SqlBoolean x, app::SqlBoolean y))
    IL2CPP_REGISTER_METHOD(0x01E4FF50, app::SqlBoolean, And, (app::SqlBoolean x, app::SqlBoolean y))
    IL2CPP_REGISTER_METHOD(0x01E50120, app::SqlBoolean, Or, (app::SqlBoolean x, app::SqlBoolean y))
    IL2CPP_REGISTER_METHOD(0x001D6280, int32_t, CompareTo_1, (app::SqlBoolean__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04793280, SqlBoolean_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D63C0, int32_t, CompareTo_2, (app::SqlBoolean__Boxed * this_ptr, app::SqlBoolean value))
    IL2CPP_REGISTER_METHOD(0x001D63D0, bool, Equals, (app::SqlBoolean__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001D63E0, int32_t, GetHashCode, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlBoolean__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6410, void, IXmlSerializable_ReadXml, (app::SqlBoolean__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001D6570, void, IXmlSerializable_WriteXml, (app::SqlBoolean__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x01E50490, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x01E505E0, void, cctor, ())
    inline app::SqlBoolean operator & (app::SqlBoolean x, app::SqlBoolean y) {
        return op_BitwiseAnd(x, y);
    }
    inline app::SqlBoolean operator | (app::SqlBoolean x, app::SqlBoolean y) {
        return op_BitwiseOr(x, y);
    }
    inline app::SqlBoolean operator == (app::SqlBoolean x, app::SqlBoolean y) {
        return op_Equality(x, y);
    }
}
