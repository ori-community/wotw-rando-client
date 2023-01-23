#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RiseSinkSwitch.h>
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RiseSinkSwitch {
    IL2CPP_REGISTER_METHOD(0x01355AA0, void, Awake, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355B50, void, OnDestroy, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355BF0, void, Start, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355C80, void, ChangeState, (app::RiseSinkSwitch * this_ptr, app::RiseSinkSwitch_RiseSinkState__Enum state))
    IL2CPP_REGISTER_METHOD(0x01355CA0, float, GetCurrentlyAppliedMass, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355E70, void, FixedUpdate, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013563E0, void, Serialize, (app::RiseSinkSwitch * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::RiseSinkSwitch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, (app::RiseSinkSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013565C0, void, set_Mask, (app::RiseSinkSwitch * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01356670, void, ctor, (app::RiseSinkSwitch * this_ptr))
} // namespace app::classes::RiseSinkSwitch
