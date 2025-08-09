#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericPrincipal.h>
#include <Modloader/app/structs/IIdentity.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Security::Principal::GenericPrincipal {
    IL2CPP_REGISTER_METHOD(0x01E1C930, void, ctor, app::GenericPrincipal* this_ptr, app::IIdentity* identity, app::String__Array* roles)
}
