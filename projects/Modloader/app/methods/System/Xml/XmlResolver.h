#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlResolver {
    IL2CPP_REGISTER_METHOD(0x01706E60, app::Uri*, ResolveUri, (app::XmlResolver * this_ptr, app::Uri* base_uri, app::String* relative_uri))
    IL2CPP_REGISTER_METHODINFO(0x0474F7A8, XmlResolver_ResolveUri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01707270, bool, SupportsType, (app::XmlResolver * this_ptr, app::Uri* absolute_uri, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x0474A5C8, XmlResolver_SupportsType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017073B0, app::Task_1_System_Object_*, GetEntityAsync, (app::XmlResolver * this_ptr, app::Uri* absolute_uri, app::String* role, app::Type* of_object_to_return))
    IL2CPP_REGISTER_METHODINFO(0x0478B948, XmlResolver_GetEntityAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlResolver * this_ptr))
} // namespace app::classes::System::Xml::XmlResolver
