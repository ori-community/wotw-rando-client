#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlUrlResolver {
    IL2CPP_REGISTER_METHOD(0x01FC3F60, app::XmlDownloadManager *, get_DownloadManager, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlUrlResolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC4120, app::Object *, GetEntity, (app::XmlUrlResolver * this_ptr, app::Uri * absolute_uri, app::String * role, app::Type * of_object_to_return))
    IL2CPP_REGISTER_METHODINFO(0x047354D0, XmlUrlResolver_GetEntity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FC42D0, app::Uri *, ResolveUri, (app::XmlUrlResolver * this_ptr, app::Uri * base_uri, app::String * relative_uri))
    IL2CPP_REGISTER_METHOD(0x01FC42E0, app::Task_1_System_Object_ *, GetEntityAsync, (app::XmlUrlResolver * this_ptr, app::Uri * absolute_uri, app::String * role, app::Type * of_object_to_return))
}
