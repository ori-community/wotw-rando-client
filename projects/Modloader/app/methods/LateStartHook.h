#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/UberPoolItem.h>
#include <Modloader/app/structs/LateStartHook.h>

namespace app::classes::LateStartHook {
    IL2CPP_REGISTER_METHOD(0x00F21F90, void, AddLateStartMethod, (app::Action * method_1))
    IL2CPP_REGISTER_METHOD(0x00F220E0, void, AddUberPoolItem, (app::UberPoolItem * item))
    IL2CPP_REGISTER_METHOD(0x00F22230, bool, ContainsMethod, (app::Action * method_1))
    IL2CPP_REGISTER_METHOD(0x00F22410, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00F224F0, void, Start, (app::LateStartHook * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LateStartHook * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F22730, void, cctor, ())
} // namespace app::classes::LateStartHook
