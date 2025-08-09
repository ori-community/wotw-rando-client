#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlStats.h>

namespace app::classes::PetrifiedOwlStats {
    IL2CPP_REGISTER_METHOD(0x014E8E80, void, Awake, app::PetrifiedOwlStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E9020, void, OnDestroy, app::PetrifiedOwlStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E91C0, void, OnPreRestore, app::PetrifiedOwlStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E92B0, void, ctor, app::PetrifiedOwlStats* this_ptr)
} // namespace app::classes::PetrifiedOwlStats
