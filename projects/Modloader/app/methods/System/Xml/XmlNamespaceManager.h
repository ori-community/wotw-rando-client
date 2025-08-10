#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>

namespace app::classes::System::Xml::XmlNamespaceManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC2AE0, void, ctor_2, app::XmlNamespaceManager* this_ptr, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlNameTable*, get_NameTable, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC2D10, app::String*, get_DefaultNamespace, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131C5E0, void, PushScope, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC2DC0, bool, PopScope, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC2F00, void, AddNamespace, app::XmlNamespaceManager* this_ptr, app::String* prefix, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01DC3410, void, RemoveNamespace, app::XmlNamespaceManager* this_ptr, app::String* prefix, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01DC3680, app::IEnumerator*, GetEnumerator, app::XmlNamespaceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DC38E0,
        app::IDictionary_2_System_String_System_String_*,
        GetNamespacesInScope,
        app::XmlNamespaceManager* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x01DC3BD0, app::String*, LookupNamespace, app::XmlNamespaceManager* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01DC3C30, int32_t, LookupNamespaceDecl, app::XmlNamespaceManager* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01DC3EC0, app::String*, LookupPrefix, app::XmlNamespaceManager* this_ptr, app::String* uri)
} // namespace app::classes::System::Xml::XmlNamespaceManager
