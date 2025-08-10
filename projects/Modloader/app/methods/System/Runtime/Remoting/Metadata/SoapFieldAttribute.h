#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SoapFieldAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Remoting::Metadata::SoapFieldAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SoapFieldAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_XmlElementName, app::SoapFieldAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IsInteropXmlElement, app::SoapFieldAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231B230, void, SetReflectionObject, app::SoapFieldAttribute* this_ptr, app::Object* reflection_object)
} // namespace app::classes::System::Runtime::Remoting::Metadata::SoapFieldAttribute
