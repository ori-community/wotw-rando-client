#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlDateTime__Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlBoolean.h>
#include <Modloader/app/structs/SqlDateTime.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::SqlTypes::SqlDateTime {
    IL2CPP_REGISTER_METHOD(0x001D6C50, void, ctor_1, (app::SqlDateTime__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001D6C60, void, ctor_2, (app::SqlDateTime__Boxed * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x001D6C70, void, ctor_3, (app::SqlDateTime__Boxed * this_ptr, int32_t day_ticks, int32_t time_ticks))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E534D0, app::TimeSpan, ToTimeSpan, (app::SqlDateTime value))
    IL2CPP_REGISTER_METHOD(0x01E535C0, app::DateTime, ToDateTime, (app::SqlDateTime value))
    IL2CPP_REGISTER_METHOD(0x01E53750, app::SqlDateTime, FromTimeSpan, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x01E53990, app::SqlDateTime, FromDateTime, (app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x001D6C80, app::DateTime, get_Value, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6C90, int32_t, get_DayTicks, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6CA0, int32_t, get_TimeTicks, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E53D40, app::SqlDateTime, op_Implicit, (app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x001D6CB0, app::String*, ToString, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E53D60, app::SqlBoolean, op_Equality, (app::SqlDateTime x, app::SqlDateTime y))
    IL2CPP_REGISTER_METHOD(0x01E53E70, app::SqlBoolean, op_LessThan, (app::SqlDateTime x, app::SqlDateTime y))
    IL2CPP_REGISTER_METHOD(0x01E53FC0, app::SqlBoolean, op_GreaterThan, (app::SqlDateTime x, app::SqlDateTime y))
    IL2CPP_REGISTER_METHOD(0x01E54110, app::SqlBoolean, LessThan, (app::SqlDateTime x, app::SqlDateTime y))
    IL2CPP_REGISTER_METHOD(0x01E541F0, app::SqlBoolean, GreaterThan, (app::SqlDateTime x, app::SqlDateTime y))
    IL2CPP_REGISTER_METHOD(0x001D6D90, int32_t, CompareTo_1, (app::SqlDateTime__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001D6EE0, int32_t, CompareTo_2, (app::SqlDateTime__Boxed * this_ptr, app::SqlDateTime value))
    IL2CPP_REGISTER_METHOD(0x001D6F10, bool, Equals, (app::SqlDateTime__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001D6F20, int32_t, GetHashCode, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlDateTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D6F60, void, IXmlSerializable_ReadXml, (app::SqlDateTime__Boxed * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x001D6F70, void, IXmlSerializable_WriteXml, (app::SqlDateTime__Boxed * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x01E54BF0, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x01E54D40, void, cctor, ())
    inline app::SqlBoolean operator==(app::SqlDateTime x, app::SqlDateTime y) {
        return op_Equality(x, y);
    }
    inline app::SqlBoolean operator<(app::SqlDateTime x, app::SqlDateTime y) {
        return op_LessThan(x, y);
    }
    inline app::SqlBoolean operator>(app::SqlDateTime x, app::SqlDateTime y) {
        return op_GreaterThan(x, y);
    }
} // namespace app::classes::System::Data::SqlTypes::SqlDateTime
