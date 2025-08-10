#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinDeadlyDarknessController.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/ZoneDamageSettings.h>

namespace app::classes::SeinDeadlyDarknessController {
    IL2CPP_REGISTER_METHOD(0x006FD880, bool, get_ControllerShakeActive, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FD890, float, get_CurrentShake, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_ModifiedStrength, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FD900, app::ZoneDamageSettings*, get_DamageSettings, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FD9C0, bool, get_OriIsInsideDarkness, )
    IL2CPP_REGISTER_METHOD(0x006FDA40, void, set_OriIsInsideDarkness, bool value)
    IL2CPP_REGISTER_METHOD(0x006FDAD0, float, get_RemainingDuration, )
    IL2CPP_REGISTER_METHOD(0x006FDB50, void, OnEnable, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FDD60, void, OnDisable, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FDFB0, void, OnRestoreCheckpoint, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE050, void, OriKilled, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE080, void, OriEnter, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE190, void, OriExit, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE190, void, StopFearSound, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE1B0, void, Start, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE270, void, Update, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE430, float, GetRTPCDarknessValue, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FE460, void, UpdateDarknessDetection, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, app::SeinDeadlyDarknessController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, app::SeinDeadlyDarknessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FEDC0, void, set_Mask, app::SeinDeadlyDarknessController* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x006FEE70, void, ctor, app::SeinDeadlyDarknessController* this_ptr)
} // namespace app::classes::SeinDeadlyDarknessController
