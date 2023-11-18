#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinBlazeSpell_BlazeSetupInfo.h>

namespace app::classes::SeinBlazeSpell_BlazeSetupInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinBlazeSpell_BlazeSetupInfo * this_ptr))
}
