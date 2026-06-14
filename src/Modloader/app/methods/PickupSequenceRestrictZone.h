#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PickupSequenceRestrictZone.h>

namespace app::classes::PickupSequenceRestrictZone {
    IL2CPP_REGISTER_METHOD(0x0115C040, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0115C120, bool, IsPickupSequenceRestricted, )
    IL2CPP_REGISTER_METHOD(0x0115C2E0, void, OnEnable, app::PickupSequenceRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115C3A0, void, OnDisable, app::PickupSequenceRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, app::PickupSequenceRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115C460, void, cctor, )
} // namespace app::classes::PickupSequenceRestrictZone
