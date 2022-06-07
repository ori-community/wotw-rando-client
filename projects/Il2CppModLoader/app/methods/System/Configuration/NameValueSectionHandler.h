#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::NameValueSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961F30, void, ctor, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716278, NameValueSectionHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961F60, app::String *, get_KeyAttributeName, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729320, NameValueSectionHandler_get_KeyAttributeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961F90, app::String *, get_ValueAttributeName, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474EA18, NameValueSectionHandler_get_ValueAttributeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961FC0, app::Object *, Create, (app::NameValueSectionHandler * this_ptr, app::Object * parent, app::Object * context, app::XmlNode * section))
    IL2CPP_REGISTER_METHODINFO(0x04748770, NameValueSectionHandler_Create__MethodInfo)
}
