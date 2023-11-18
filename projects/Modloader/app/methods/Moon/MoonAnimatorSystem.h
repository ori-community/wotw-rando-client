#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimatorSystem.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::MoonAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x0211D880, void, RegisterAnimatorForPreview, (app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x0211D9A0, void, UnregisterAnimatorForPreview, (app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x0211DA60, void, UpdateMoonAnimatorPreviews, (float current_time))
    IL2CPP_REGISTER_METHOD(0x0211DBA0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0211DD10, void, RuntimeInitializeOnLoad, ())
    IL2CPP_REGISTER_METHOD(0x0211DDA0, void, ClearAll, ())
    IL2CPP_REGISTER_METHOD(0x0211DF60, bool, HasInstance, ())
    IL2CPP_REGISTER_METHOD(0x0211E030, app::MoonAnimatorSystem*, GetInstance, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::PlayableGraph, get_PlayableGraph, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A8A0, void, set_PlayableGraph, (app::MoonAnimatorSystem * this_ptr, app::PlayableGraph value))
    IL2CPP_REGISTER_METHOD(0x0211E2C0, void, OnUpdate, (app::MoonAnimatorSystem * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211E650, void, RegisterAnimator, (app::MoonAnimatorSystem * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0211E750, void, UnregisterAnimator, (app::MoonAnimatorSystem * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0211EA50, void, ClearAllAnimators, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211EB80, void, ProcessUnregisterQueue, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211ECA0, void, Awake, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211ED80, void, OnEnable, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211EE20, void, OnDisable, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211EEC0, void, OnDestroy, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211EF70, void, ctor, (app::MoonAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211F1B0, void, cctor, ())
} // namespace app::classes::Moon::MoonAnimatorSystem
