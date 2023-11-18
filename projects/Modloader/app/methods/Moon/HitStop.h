#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HitStop.h>
#include <Modloader/app/structs/IHitStopReceiver.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>

namespace app::classes::Moon::HitStop {
    IL2CPP_REGISTER_METHOD(0x014AC1C0, void, SubmitHitStop_1, (app::GameObject * go, float duration))
    IL2CPP_REGISTER_METHOD(0x014AC370, void, SubmitHitStop_2, (app::IHitStopReceiver * hit_stop_receiver, float duration))
    IL2CPP_REGISTER_METHOD(0x014AC730, void, SubmitHitStopReceiverInternal, (app::HitStop * this_ptr, app::IHitStopReceiver* hit_stop_receiver, float duration))
    IL2CPP_REGISTER_METHOD(0x014AC8F0, void, SubmitHitStopInternal, (app::HitStop * this_ptr, app::List_1_Moon_ISuspendable_* suspendables, float duration))
    IL2CPP_REGISTER_METHOD(0x014ACD00, void, Awake, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014ACE50, void, OnDisable, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014ACE60, void, OnDestroy, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014ACFB0, void, UpdateHitStop, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AD2A0, void, Clear, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AD440, void, ctor, (app::HitStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AD680, void, cctor, ())
} // namespace app::classes::Moon::HitStop
