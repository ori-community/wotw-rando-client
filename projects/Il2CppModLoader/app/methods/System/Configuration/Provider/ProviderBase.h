#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::Provider::ProviderBase {
    IL2CPP_REGISTER_METHOD(0x031BBFF0, void, Initialize, (app::ProviderBase * this_ptr, app::String * name, app::NameValueCollection * config))
    IL2CPP_REGISTER_METHODINFO(0x0478A6D0, ProviderBase_Initialize__MethodInfo)
}
