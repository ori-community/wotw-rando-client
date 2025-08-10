#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NoNamespaceManager.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_NoNamespaceManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FBBBD0, app::String*, get_DefaultNamespace, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PushScope, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, PopScope, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddNamespace, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr, app::String* prefix, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveNamespace, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr, app::String* prefix, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IEnumerator*, GetEnumerator, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::IDictionary_2_System_String_System_String_*,
        GetNamespacesInScope,
        app::XmlTextReaderImpl_NoNamespaceManager* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x01FBBC50, app::String*, LookupNamespace, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, LookupPrefix, app::XmlTextReaderImpl_NoNamespaceManager* this_ptr, app::String* uri)
} // namespace app::classes::System::Xml::XmlTextReaderImpl_NoNamespaceManager
