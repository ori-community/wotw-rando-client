#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Principal::GenericPrincipal {
    IL2CPP_REGISTER_METHOD(0x01E1C930, void, ctor, (app::GenericPrincipal * this_ptr, app::IIdentity* identity, app::String__Array* roles))
    IL2CPP_REGISTER_METHODINFO(0x04708718, GenericPrincipal__ctor__MethodInfo)
} // namespace app::classes::System::Security::Principal::GenericPrincipal
