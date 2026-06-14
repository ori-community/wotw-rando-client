#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MixerManager_c.h>
#include <Modloader/app/structs/MixerSnapshot.h>

namespace app::classes::MixerManager___c {
    IL2CPP_REGISTER_METHOD(0x0132E9F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MixerManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132EB30, bool, __cctor_b__27_0, app::MixerManager_c* this_ptr, app::MixerSnapshot* snapshot)
} // namespace app::classes::MixerManager___c
