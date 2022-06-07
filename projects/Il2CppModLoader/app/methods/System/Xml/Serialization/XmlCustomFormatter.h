#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlCustomFormatter {
    IL2CPP_REGISTER_METHOD(0x01C9D2B0, app::String *, FromEnum, (int64_t value, app::String__Array * values, app::Int64__Array * ids, app::String * type_name))
    IL2CPP_REGISTER_METHODINFO(0x04760928, XmlCustomFormatter_FromEnum__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C9D6D0, app::String *, FromXmlName, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x01C9D770, app::String *, FromXmlNCName, (app::String * nc_name))
    IL2CPP_REGISTER_METHOD(0x01C9D810, app::String *, ToXmlString, (app::TypeData * type, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01C9E770, app::Object *, FromXmlString, (app::TypeData * type, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01C9F450, void, cctor, ())
}
