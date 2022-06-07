#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::IgnoreSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961C00, void, ctor, (app::IgnoreSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BD08, IgnoreSectionHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961C30, app::Object *, Create, (app::IgnoreSectionHandler * this_ptr, app::Object * parent, app::Object * config_context, app::XmlNode * section))
    IL2CPP_REGISTER_METHODINFO(0x04773700, IgnoreSectionHandler_Create__MethodInfo)
}
