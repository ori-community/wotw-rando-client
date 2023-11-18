#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlResolver.h>

namespace app::classes::System::Xml::XmlResolver {
    IL2CPP_REGISTER_METHOD(0x01706E60, app::Uri*, ResolveUri, (app::XmlResolver * this_ptr, app::Uri* base_uri, app::String* relative_uri))
    IL2CPP_REGISTER_METHOD(0x01707270, bool, SupportsType, (app::XmlResolver * this_ptr, app::Uri* absolute_uri, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x017073B0, app::Task_1_System_Object_*, GetEntityAsync, (app::XmlResolver * this_ptr, app::Uri* absolute_uri, app::String* role, app::Type* of_object_to_return))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlResolver * this_ptr))
} // namespace app::classes::System::Xml::XmlResolver
