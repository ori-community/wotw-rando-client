#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::NameValueFileSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961ED0, void, ctor, (app::NameValueFileSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774B50, NameValueFileSectionHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961F00, app::Object*, Create, (app::NameValueFileSectionHandler * this_ptr, app::Object* parent, app::Object* config_context, app::XmlNode* section))
    IL2CPP_REGISTER_METHODINFO(0x04733E48, NameValueFileSectionHandler_Create__MethodInfo)
} // namespace app::classes::System::Configuration::NameValueFileSectionHandler
