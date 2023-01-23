#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/MoonAnimatorParallelUpdater.h>
#include <Modloader/app/structs/PlayableGraph.h>

namespace app::classes::Moon::MoonAnimatorParallelUpdater {
    IL2CPP_REGISTER_METHOD(0x0211C7B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0211C8A0, void, ClearAllAnimators, ())
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::UpdateType__Enum, get_UpdateType, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_UpdateType, (app::MoonAnimatorParallelUpdater * this_ptr, app::UpdateType__Enum value))
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::PlayableGraph, get_PlayableGraph, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211CA10, void, OnEnable, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211CAB0, void, OnDisable, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211CB50, void, OnDestroy, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211CBF0, void, OnUpdate, (app::MoonAnimatorParallelUpdater * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211CF70, void, Awake, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211D050, void, UpdateAnimatorStates, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211D620, void, ClearStates, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211D680, void, ctor, (app::MoonAnimatorParallelUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211D710, void, cctor, ())
} // namespace app::classes::Moon::MoonAnimatorParallelUpdater
