#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Elevator.h>
#include <Modloader/app/structs/Elevator_ElevatorStop.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::Elevator {
    IL2CPP_REGISTER_METHOD(0x00BF99D0, bool, get_GoingUp, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF99F0, bool, get_GoingDown, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF9A10, uint8_t, get_CurrentStopIndex, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF9A30, void, set_CurrentStopIndex, (app::Elevator * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x00BF9A50, app::Elevator_ElevatorStop*, get_CurrentStop, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF9B10, void, OnEnable, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF9FD0, void, OnDisable, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFA490, void, FixedUpdate, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFA860, void, StopMoving, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFA980, void, OnRestoreCheckpoint, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047042D0, Elevator_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BFA9D0, void, GoDown, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047269F8, Elevator_GoDown__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BFAC10, void, GoUp, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A2C0, Elevator_GoUp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BFAE40, void, SetDesiredStop, (app::Elevator * this_ptr, uint8_t stop_index))
    IL2CPP_REGISTER_METHOD(0x00BFA980, void, StopTimelines, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB1D0, bool, IsAnyTimelinePlaying, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB220, void, Apply, (app::Elevator * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB3D0, app::IUberState__Array*, get_AffectingUberStates, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB460, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB530, void, OnDrawGizmos, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB7E0, float, GetTweenNormalizedValue, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065B580, app::SuspendableMask__Enum, get_Mask, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_Mask, (app::Elevator * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, (app::Elevator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, (app::Elevator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BFB9D0, void, ctor, (app::Elevator * this_ptr))
} // namespace app::classes::Elevator
