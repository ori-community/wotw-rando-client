#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/SqlChars.h>
#include <Modloader/app/structs/SqlString.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::SqlTypes::SqlChars {
    IL2CPP_REGISTER_METHOD(0x01E518F0, void, ctor_1, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E51910, void, ctor_2, app::SqlChars* this_ptr, app::Char__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x01E52680, void, ctor_3, app::SqlChars* this_ptr, app::SqlString value)
    IL2CPP_REGISTER_METHOD(0x01E519D0, bool, get_IsNull, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E52710, app::Char__Array*, get_Buffer, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E52740, int64_t, get_Length, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E52810, app::Char__Array*, get_Value, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E518F0, void, SetNull, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E51EE0, bool, FStream, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E52A70, void, CopyStreamToBuffer, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E51EF0, void, SetBuffer, app::SqlChars* this_ptr, app::Char__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchema*, IXmlSerializable_GetSchema, app::SqlChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E52C10, void, IXmlSerializable_ReadXml, app::SqlChars* this_ptr, app::XmlReader* r)
    IL2CPP_REGISTER_METHOD(0x01E52D80, void, IXmlSerializable_WriteXml, app::SqlChars* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x01E52F90, app::XmlQualifiedName*, GetXsdType, app::XmlSchemaSet* schema_set)
    IL2CPP_REGISTER_METHOD(0x01E530E0, void, ISerializable_GetObjectData, app::SqlChars* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01E53130, app::SqlChars*, get_Null, )
} // namespace app::classes::System::Data::SqlTypes::SqlChars
