#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerStack.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/InternalFE.h>
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/HeaderHandler.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/ParseRecord.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/BinaryAssemblyInfo.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectReader {
    IL2CPP_REGISTER_METHOD(0x01D94A90, app::SerStack*, get_ValueFixupStack, (app::ObjectReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Object*, get_TopObject, (app::ObjectReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D94C00, void, set_TopObject, (app::ObjectReader * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01D94C20, void, ctor, (app::ObjectReader * this_ptr, app::Stream* stream, app::ISurrogateSelector* selector, app::StreamingContext context, app::InternalFE* formatter_enums, app::SerializationBinder* binder))
    IL2CPP_REGISTER_METHODINFO(0x04731DE0, ObjectReader__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D94DF0, app::Object*, Deserialize, (app::ObjectReader * this_ptr, app::HeaderHandler* handler, app::_BinaryParser* ser_parser, bool f_check))
    IL2CPP_REGISTER_METHODINFO(0x04729CD8, ObjectReader_Deserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D95330, bool, HasSurrogate, (app::ObjectReader * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x01D95480, void, CheckSerializable, (app::ObjectReader * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHODINFO(0x047985E0, ObjectReader_CheckSerializable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D95620, void, InitFullDeserialization, (app::ObjectReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D959A0, app::Object*, CrossAppDomainArray, (app::ObjectReader * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01D959E0, app::ReadObjectInfo*, CreateReadObjectInfo_1, (app::ObjectReader * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x01D95AA0, app::ReadObjectInfo*, CreateReadObjectInfo_2, (app::ObjectReader * this_ptr, app::Type* object_type, app::String__Array* member_names, app::Type__Array* member_types))
    IL2CPP_REGISTER_METHOD(0x01D95B90, void, Parse, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHODINFO(0x04787050, ObjectReader_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D95E60, void, ParseError, (app::ObjectReader * this_ptr, app::ParseRecord* processing, app::ParseRecord* on_stack))
    IL2CPP_REGISTER_METHODINFO(0x0475AD28, ObjectReader_ParseError__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D96160, void, ParseSerializedStreamHeader, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D96190, void, ParseSerializedStreamHeaderEnd, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D961C0, void, ParseObject, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHODINFO(0x0473B878, ObjectReader_ParseObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D966B0, void, ParseObjectEnd, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D96AC0, void, ParseArray, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHODINFO(0x0478AEB8, ObjectReader_ParseArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D97560, void, NextRectangleMap, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D976A0, void, ParseArrayMember, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHODINFO(0x04716440, ObjectReader_ParseArrayMember__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D984F0, void, ParseArrayMemberEnd, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D98520, void, ParseMember, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHODINFO(0x04752330, ObjectReader_ParseMember__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D98E70, void, ParseMemberEnd, (app::ObjectReader * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01D98F60, void, ParseString, (app::ObjectReader * this_ptr, app::ParseRecord* pr, app::ParseRecord* parent_pr))
    IL2CPP_REGISTER_METHOD(0x01D98FB0, void, RegisterObject_1, (app::ObjectReader * this_ptr, app::Object* obj, app::ParseRecord* pr, app::ParseRecord* object_pr))
    IL2CPP_REGISTER_METHOD(0x01D98FD0, void, RegisterObject_2, (app::ObjectReader * this_ptr, app::Object* obj, app::ParseRecord* pr, app::ParseRecord* object_pr, bool b_is_string))
    IL2CPP_REGISTER_METHOD(0x01D99160, int64_t, GetId, (app::ObjectReader * this_ptr, int64_t object_id))
    IL2CPP_REGISTER_METHOD(0x01D99510, app::Type*, Bind, (app::ObjectReader * this_ptr, app::String* assembly_string, app::String* type_string))
    IL2CPP_REGISTER_METHOD(0x01D99570, app::Type*, FastBindToType, (app::ObjectReader * this_ptr, app::String* assembly_name, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x01D99980, app::Assembly*, ResolveSimpleAssemblyName, (app::AssemblyName * assembly_name))
    IL2CPP_REGISTER_METHODINFO(0x04753A98, ObjectReader_ResolveSimpleAssemblyName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D99A10, void, GetSimplyNamedTypeFromAssembly, (app::Assembly * assm, app::String* type_name, app::Type** type))
    IL2CPP_REGISTER_METHOD(0x01D99DA0, app::Type*, GetType, (app::ObjectReader * this_ptr, app::BinaryAssemblyInfo* assembly_info, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01D99FD0, void, CheckTypeForwardedTo, (app::Assembly * source_assembly, app::Assembly* dest_assembly, app::Type* resolved_type))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectReader
