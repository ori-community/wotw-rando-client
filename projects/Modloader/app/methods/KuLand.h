#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuLand.h>

namespace app::classes::KuLand {
    IL2CPP_REGISTER_METHOD(0x0123C0B0, bool, get_IdleLand, (app::KuLand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C1C0, void, OnSetReferenceToKu, (app::KuLand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (app::KuLand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C1F0, void, UpdateState, (app::KuLand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123C2A0, void, Land, (app::KuLand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuLand * this_ptr))
} // namespace app::classes::KuLand
