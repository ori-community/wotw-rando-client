#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlXml.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSet.h>

namespace app::classes::System::Data::SqlTypes::SqlXml {
    IL2CPP_REGISTER_METHOD(0x022BC390, void, ctor, (app::SqlXml * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BC3B0, app::XmlReader*, CreateReader, (app::SqlXml * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786C08, SqlXml_CreateReader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BC6C0, app::XmlReader*, CreateSqlXmlReader, (app::Stream * stream, bool close_input, bool throw_target_invocation_exceptions))
    IL2CPP_REGISTER_METHODINFO(0x04708238, SqlXml_CreateSqlXmlReader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BC890, app::Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_*, CreateSqlReaderDelegate, ())
    IL2CPP_REGISTER_METHOD(0x022BC9B0, app::MethodInfo_1*, get_CreateSqlReaderMethodInfo, ())
    IL2CPP_REGISTER_METHOD(0x022BCB80, bool, get_IsNull, (app::SqlXml * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BC390, void, SetNull, (app::SqlXml * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchema*, IXmlSerializable_GetSchema, (app::SqlXml * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BCB90, void, IXmlSerializable_ReadXml, (app::SqlXml * this_ptr, app::XmlReader* r))
    IL2CPP_REGISTER_METHOD(0x022BCEE0, void, IXmlSerializable_WriteXml, (app::SqlXml * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x022BD090, app::XmlQualifiedName*, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022BD1E0, void, cctor, ())
} // namespace app::classes::System::Data::SqlTypes::SqlXml
