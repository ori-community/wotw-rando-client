#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlSerializerNamespaces {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSerializerNamespaces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194C170, void, Add, (app::XmlSerializerNamespaces * this_ptr, app::String* prefix, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0194C290, void, AddInternal, (app::XmlSerializerNamespaces * this_ptr, app::String* prefix, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0194C2E0, app::XmlQualifiedName__Array*, ToArray, (app::XmlSerializerNamespaces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194C420, int32_t, get_Count, (app::XmlSerializerNamespaces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194C450, app::ArrayList*, get_NamespaceList, (app::XmlSerializerNamespaces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194C8F0, app::Hashtable*, get_Namespaces, (app::XmlSerializerNamespaces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Namespaces, (app::XmlSerializerNamespaces * this_ptr, app::Hashtable* value))
} // namespace app::classes::System::Xml::Serialization::XmlSerializerNamespaces
