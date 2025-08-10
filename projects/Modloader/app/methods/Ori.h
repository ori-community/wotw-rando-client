#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Ori.h>
#include <Modloader/app/structs/Ori_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Ori {
    IL2CPP_REGISTER_METHOD(0x0061E140, app::Transform*, get_m_target, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E240, app::Vector3, get_TargetPosition, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_EnableHoverWobbling, app::Ori* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_EnableHoverWobbling, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E300, app::Vector3, get_HoverOffset, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E4B0, app::Vector3, get_Position, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E540, void, set_Position, app::Ori* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, get_IsSuspended, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E5D0, void, set_IsSuspended, app::Ori* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0061E5E0, app::SuspendableMask__Enum, get_Mask, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E5F0, void, set_Mask, app::Ori* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0061E6B0, void, Awake, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E920, void, OnEnable, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E930, void, OnDestroy, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061EB00, void, Serialize, app::Ori* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0061EB70, void, OnRestoreCheckpoint, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061EBC0, bool, IsListening, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061EBD0, void, ChangeState, app::Ori* this_ptr, app::Ori_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0061E920, void, MoveOriToPlayer, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061ED60, void, MoveOriBackToPlayer, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061EF60, void, MoveOriToPosition, app::Ori* this_ptr, app::Vector3 position, float duration)
    IL2CPP_REGISTER_METHOD(
        0x0061F270,
        void,
        MoveOriAlongCurve,
        app::Ori* this_ptr,
        app::AnimationCurve* position_x,
        app::AnimationCurve* position_y,
        app::AnimationCurve* position_z,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(0x0061F3F0, void, UpdateState, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061F600, void, UpdateMoveAlongCurveState, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061FAA0, void, UpdateMoveToPositionState, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620040, void, UpdateHoveringState, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620700, void, FixedUpdate, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620940, void, BackToPlayerController, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620970, app::Color, SetRGB, app::Ori* this_ptr, app::Color old, app::Color new_color)
    IL2CPP_REGISTER_METHOD(0x00620990, void, StopTwinkle, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006209D0, void, StartTwinkle, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620A10, void, StartListening, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620A20, void, StopListening, app::Ori* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00620A30, void, ctor, app::Ori* this_ptr)
} // namespace app::classes::Ori
