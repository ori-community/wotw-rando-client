#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedFog.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::PetrifiedFog {
    IL2CPP_REGISTER_METHOD(0x0049ABF0, float, get_RemainingDuration, ())
    IL2CPP_REGISTER_METHOD(0x0049AC70, void, OnEnable, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049AC80, void, Activate, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049AD70, bool, PositionInPetrifiedFog, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0049AF20, bool, InThisZone, (app::PetrifiedFog * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0049AF70, void, OnDisable, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049AF80, void, Deactivate, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049B070, void, FixedUpdate, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049BF30, void, Serialize, (app::PetrifiedFog * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::PetrifiedFog * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::PetrifiedFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C040, void, set_Mask, (app::PetrifiedFog * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0049C0F0, void, ctor, (app::PetrifiedFog * this_ptr))
} // namespace app::classes::PetrifiedFog
