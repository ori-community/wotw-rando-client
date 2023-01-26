#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateTestHookUp.h>

namespace app::classes::UberStateTestHookUp {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::UberStateTestHookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberStateTestHookUp * this_ptr))
} // namespace app::classes::UberStateTestHookUp
