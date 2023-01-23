#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlBinary__Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SqlBinary.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EComparison__Enum.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlGuid.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSet.h>

namespace app::classes::System::Data::SqlTypes::SqlBinary {
    IL2CPP_REGISTER_METHOD(0x00120B90, void, ctor_1, (app::SqlBinary__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001D5C30, void, ctor_2, (app::SqlBinary__Boxed * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C50, app::Byte__Array*, get_Value, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478CCF8, SqlBinary_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D5C60, int32_t, get_Length, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477DB38, SqlBinary_get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E4E990, app::SqlBinary, op_Implicit, (app::Byte__Array * x))
    IL2CPP_REGISTER_METHOD(0x001D5D10, app::String*, ToString, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4EAA0, app::EComparison__Enum, PerformCompareByte, (app::Byte__Array * x, app::Byte__Array* y))
    IL2CPP_REGISTER_METHOD(0x01E4EBD0, app::SqlBoolean, op_Equality, (app::SqlBinary x, app::SqlBinary y))
    IL2CPP_REGISTER_METHOD(0x01E4ECF0, app::SqlBoolean, op_LessThan, (app::SqlBinary x, app::SqlBinary y))
    IL2CPP_REGISTER_METHOD(0x01E4EE10, app::SqlBoolean, op_GreaterThan, (app::SqlBinary x, app::SqlBinary y))
    IL2CPP_REGISTER_METHOD(0x001D5D20, app::SqlGuid, ToSqlGuid, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5E90, int32_t, CompareTo_1, (app::SqlBinary__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04796120, SqlBinary_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D5FD0, int32_t, CompareTo_2, (app::SqlBinary__Boxed * this_ptr, app::SqlBinary value))
    IL2CPP_REGISTER_METHOD(0x001D5FE0, bool, Equals, (app::SqlBinary__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01E4F4A0, int32_t, HashByteArray, (app::Byte__Array * rgb_value, int32_t length))
    IL2CPP_REGISTER_METHOD(0x001D5FF0, int32_t, GetHashCode, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlBinary__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6000, void, IXmlSerializable_ReadXml, (app::SqlBinary__Boxed * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x001D6010, void, IXmlSerializable_WriteXml, (app::SqlBinary__Boxed * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x01E4F870, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x01E4F9C0, void, cctor, ())
    inline app::SqlBoolean operator==(app::SqlBinary x, app::SqlBinary y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator<(app::SqlBinary x, app::SqlBinary y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator>(app::SqlBinary x, app::SqlBinary y) {
        return op_GreaterThan(x, y);
    }
} // namespace app::classes::System::Data::SqlTypes::SqlBinary
