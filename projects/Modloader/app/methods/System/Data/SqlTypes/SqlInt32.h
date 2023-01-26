#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlInt32__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlByte.h>
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

namespace app::classes::System::Data::SqlTypes::SqlInt32 {
    IL2CPP_REGISTER_METHOD(0x001E49E0, void, ctor_1, (app::SqlInt32__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E49F0, void, ctor_2, (app::SqlInt32__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4A00, int32_t, get_Value, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B2560, app::SqlInt32, op_Implicit_1, (int32_t x))
    IL2CPP_REGISTER_METHOD(0x001E4A10, app::String*, ToString, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022B2580, app::SqlInt32, op_UnaryNegation, (app::SqlInt32 x))
    IL2CPP_REGISTER_METHOD(0x022B2660, app::SqlInt32, op_Addition, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B27F0, app::SqlInt32, op_Subtraction, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B2980, app::SqlInt32, op_Multiply, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B2B20, app::SqlInt32, op_Division, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B2CC0, app::SqlInt32, op_Implicit_2, (app::SqlByte x))
    IL2CPP_REGISTER_METHOD(0x022B2DF0, app::SqlInt32, op_Implicit_3, (app::SqlInt16 x))
    IL2CPP_REGISTER_METHOD(0x022B2F20, app::SqlInt32, op_Explicit, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHOD(0x022B3050, bool, SameSignInt, (int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x022B3070, app::SqlBoolean, op_Equality, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B3150, app::SqlBoolean, op_LessThan, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B3230, app::SqlBoolean, op_GreaterThan, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B3310, app::SqlBoolean, LessThan, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x022B33C0, app::SqlBoolean, GreaterThan, (app::SqlInt32 x, app::SqlInt32 y))
    IL2CPP_REGISTER_METHOD(0x001E4A50, app::SqlDouble, ToSqlDouble, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4A80, app::SqlInt64, ToSqlInt64, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4AB0, int32_t, CompareTo_1, (app::SqlInt32__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001E4BF0, int32_t, CompareTo_2, (app::SqlInt32__Boxed * this_ptr, app::SqlInt32 value))
    IL2CPP_REGISTER_METHOD(0x001E4C00, bool, Equals, (app::SqlInt32__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001E4C10, int32_t, GetHashCode, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlInt32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E4C30, void, IXmlSerializable_ReadXml, (app::SqlInt32__Boxed * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x001E4DB0, void, IXmlSerializable_WriteXml, (app::SqlInt32__Boxed * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x022B3950, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022B3AA0, void, cctor, ())
    inline app::SqlInt32 operator-(app::SqlInt32 x) {
        return op_UnaryNegation(x);
    }
    inline app::SqlInt32 operator+(app::SqlInt32 x, app::SqlInt32 y) {
        return op_Addition(x, y);
    }
    inline app::SqlInt32 operator-(app::SqlInt32 x, app::SqlInt32 y) {
        return op_Subtraction(x, y);
    }
    inline app::SqlInt32 operator*(app::SqlInt32 x, app::SqlInt32 y) {
        return op_Multiply(x, y);
    }
    inline app::SqlInt32 operator/(app::SqlInt32 x, app::SqlInt32 y) {
        return op_Division(x, y);
    }
    inline app::SqlBoolean operator==(app::SqlInt32 x, app::SqlInt32 y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator<(app::SqlInt32 x, app::SqlInt32 y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator>(app::SqlInt32 x, app::SqlInt32 y) {
        return op_GreaterThan(x, y);
    }
} // namespace app::classes::System::Data::SqlTypes::SqlInt32
