#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Metadata::SoapTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_UseAttribute, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_XmlElementName, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_XmlNamespace, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_XmlTypeName, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_XmlTypeNamespace, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsInteropXmlElement, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsInteropXmlType, (app::SoapTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0231B610, void, SetReflectionObject, (app::SoapTypeAttribute * this_ptr, app::Object* reflection_object))
} // namespace app::classes::System::Runtime::Remoting::Metadata::SoapTypeAttribute
