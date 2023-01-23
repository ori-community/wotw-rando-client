#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlBytes.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SqlBinary.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Data::SqlTypes::SqlBytes {
    IL2CPP_REGISTER_METHOD(0x01E518F0, void, ctor_1, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E51910, void, ctor_2, (app::SqlBytes * this_ptr, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01E51950, void, ctor_3, (app::SqlBytes * this_ptr, app::SqlBinary value))
    IL2CPP_REGISTER_METHOD(0x01E519D0, bool, get_IsNull, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E519E0, app::Byte__Array*, get_Buffer, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E51A10, int64_t, get_Length, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BE50, SqlBytes_get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E51AE0, app::Byte__Array*, get_Value, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DA90, SqlBytes_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E518F0, void, SetNull, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E51D40, void, CopyStreamToBuffer, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791C08, SqlBytes_CopyStreamToBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E51EE0, bool, FStream, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E51EF0, void, SetBuffer, (app::SqlBytes * this_ptr, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E51F20, void, IXmlSerializable_ReadXml, (app::SqlBytes * this_ptr, app::XmlReader* r))
    IL2CPP_REGISTER_METHOD(0x01E52160, void, IXmlSerializable_WriteXml, (app::SqlBytes * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x01E52390, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x01E524E0, void, ISerializable_GetObjectData, (app::SqlBytes * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0477B030, SqlBytes_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E52530, app::SqlBytes*, get_Null, ())
} // namespace app::classes::System::Data::SqlTypes::SqlBytes
