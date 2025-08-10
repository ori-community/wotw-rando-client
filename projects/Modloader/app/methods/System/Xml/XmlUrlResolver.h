#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlDownloadManager.h>
#include <Modloader/app/structs/XmlUrlResolver.h>

namespace app::classes::System::Xml::XmlUrlResolver {
    IL2CPP_REGISTER_METHOD(0x01FC3F60, app::XmlDownloadManager*, get_DownloadManager, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlUrlResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FC4120,
        app::Object*,
        GetEntity,
        app::XmlUrlResolver* this_ptr,
        app::Uri* absolute_uri,
        app::String* role,
        app::Type* of_object_to_return
    )
    IL2CPP_REGISTER_METHOD(0x01FC42D0, app::Uri*, ResolveUri, app::XmlUrlResolver* this_ptr, app::Uri* base_uri, app::String* relative_uri)
    IL2CPP_REGISTER_METHOD(
        0x01FC42E0,
        app::Task_1_System_Object_*,
        GetEntityAsync,
        app::XmlUrlResolver* this_ptr,
        app::Uri* absolute_uri,
        app::String* role,
        app::Type* of_object_to_return
    )
} // namespace app::classes::System::Xml::XmlUrlResolver
