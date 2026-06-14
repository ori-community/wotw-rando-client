#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlByte.h>
#include <Modloader/app/structs/SqlDecimal.h>
#include <Modloader/app/structs/SqlDouble.h>
#include <Modloader/app/structs/SqlDouble__Boxed.h>
#include <Modloader/app/structs/SqlInt16.h>
#include <Modloader/app/structs/SqlInt32.h>
#include <Modloader/app/structs/SqlInt64.h>
#include <Modloader/app/structs/SqlMoney.h>
#include <Modloader/app/structs/SqlSingle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::SqlTypes::SqlDouble {
    IL2CPP_REGISTER_METHOD(0x001E3B70, void, ctor_1, app::SqlDouble__Boxed* this_ptr, bool f_null)
    IL2CPP_REGISTER_METHOD(0x001E3B80, void, ctor_2, app::SqlDouble__Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E3B90, double, get_Value, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022AE0B0, app::SqlDouble, op_Implicit_1, double x)
    IL2CPP_REGISTER_METHOD(0x001E3BA0, app::String*, ToString, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022AE0D0, app::SqlDouble, op_UnaryNegation, app::SqlDouble x)
    IL2CPP_REGISTER_METHOD(0x022AE1D0, app::SqlDouble, op_Addition, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AE350, app::SqlDouble, op_Subtraction, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AE4D0, app::SqlDouble, op_Multiply, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AE650, app::SqlDouble, op_Division, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AE820, app::SqlDouble, op_Implicit_2, app::SqlByte x)
    IL2CPP_REGISTER_METHOD(0x022AE970, app::SqlDouble, op_Implicit_3, app::SqlInt16 x)
    IL2CPP_REGISTER_METHOD(0x022AEAC0, app::SqlDouble, op_Implicit_4, app::SqlInt32 x)
    IL2CPP_REGISTER_METHOD(0x022AEC00, app::SqlDouble, op_Implicit_5, app::SqlInt64 x)
    IL2CPP_REGISTER_METHOD(0x022AED00, app::SqlDouble, op_Implicit_6, app::SqlSingle x)
    IL2CPP_REGISTER_METHOD(0x022AEE40, app::SqlDouble, op_Implicit_7, app::SqlMoney x)
    IL2CPP_REGISTER_METHOD(0x022AEF40, app::SqlDouble, op_Implicit_8, app::SqlDecimal x)
    IL2CPP_REGISTER_METHOD(0x022AF040, app::SqlBoolean, op_Equality, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AF120, app::SqlBoolean, op_LessThan, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AF200, app::SqlBoolean, op_GreaterThan, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AF2E0, app::SqlBoolean, LessThan, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x022AF450, app::SqlBoolean, GreaterThan, app::SqlDouble x, app::SqlDouble y)
    IL2CPP_REGISTER_METHOD(0x001E3BF0, app::SqlSingle, ToSqlSingle, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E3C00, int32_t, CompareTo_1, app::SqlDouble__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001E3D50, int32_t, CompareTo_2, app::SqlDouble__Boxed* this_ptr, app::SqlDouble value)
    IL2CPP_REGISTER_METHOD(0x001E3D70, bool, Equals, app::SqlDouble__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001E3D80, int32_t, GetHashCode, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema*, IXmlSerializable_GetSchema, app::SqlDouble__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E3DC0, void, IXmlSerializable_ReadXml, app::SqlDouble__Boxed* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x001E3F20, void, IXmlSerializable_WriteXml, app::SqlDouble__Boxed* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x022AFC10, app::XmlQualifiedName*, GetXsdType, app::XmlSchemaSet* schema_set)
    IL2CPP_REGISTER_METHOD(0x022AFD60, void, cctor, )
    inline app::SqlDouble operator-(app::SqlDouble x) { return op_UnaryNegation(x); }
    inline app::SqlDouble operator+(app::SqlDouble x, app::SqlDouble y) { return op_Addition(x, y); }
    inline app::SqlDouble operator-(app::SqlDouble x, app::SqlDouble y) { return op_Subtraction(x, y); }
    inline app::SqlDouble operator*(app::SqlDouble x, app::SqlDouble y) { return op_Multiply(x, y); }
    inline app::SqlDouble operator/(app::SqlDouble x, app::SqlDouble y) { return op_Division(x, y); }
    inline app::SqlBoolean operator==(app::SqlDouble x, app::SqlDouble y) { return op_Equality(x, y); }
    inline app::SqlBoolean operator<(app::SqlDouble x, app::SqlDouble y) { return op_LessThan(x, y); }
    inline app::SqlBoolean operator>(app::SqlDouble x, app::SqlDouble y) { return op_GreaterThan(x, y); }
} // namespace app::classes::System::Data::SqlTypes::SqlDouble
