#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionHelper.h>
#include <Modloader/app/structs/XmlTypeMapping.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Xml::Serialization::ReflectionHelper {
    IL2CPP_REGISTER_METHOD(0x01C8F6C0, void, RegisterSchemaType, (app::ReflectionHelper * this_ptr, app::XmlTypeMapping* map, app::String* xml_type, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01C8F7C0, app::XmlTypeMapping*, GetRegisteredSchemaType, (app::ReflectionHelper * this_ptr, app::String* xml_type, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01C8F8D0, void, RegisterClrType, (app::ReflectionHelper * this_ptr, app::XmlTypeMapping* map, app::Type* type, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01C8FA30, app::XmlTypeMapping*, GetRegisteredClrType, (app::ReflectionHelper * this_ptr, app::Type* type, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01C8FBB0, void, CheckSerializableType, (app::Type * type, bool allow_private_constructors))
    IL2CPP_REGISTER_METHODINFO(0x0475DD00, ReflectionHelper_CheckSerializableType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C8FF50, void, ctor, (app::ReflectionHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90180, void, cctor, ())
} // namespace app::classes::System::Xml::Serialization::ReflectionHelper
