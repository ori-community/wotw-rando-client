#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Configuration::ModuleElement {
    IL2CPP_REGISTER_METHOD(0x02019CB0, void, ctor, (app::ModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C0D0, ModuleElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019CE0, app::ConfigurationPropertyCollection *, get_Properties, (app::ModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F330, ModuleElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019D10, app::String *, get_Type, (app::ModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047179E8, ModuleElement_get_Type__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019D40, void, set_Type, (app::ModuleElement * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047920B0, ModuleElement_set_Type__MethodInfo)
}
