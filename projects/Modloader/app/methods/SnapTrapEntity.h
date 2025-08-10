#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SnapTrapEntity.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#include <Modloader/app/structs/SnapTrapEntity_State__Enum.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SnapTrapEntity {
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_IsSuspended, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6480, void, set_IsSuspended, app::SnapTrapEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006D64E0, app::SoundHost*, get_SoundHost, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D64F0, app::SuspendableMask__Enum, get_Mask, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6500, void, set_Mask, app::SnapTrapEntity* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x006D6510, app::SnapTrapEntity_State__Enum, GetState, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006D6520,
        void,
        Setup,
        app::SnapTrapEntity* this_ptr,
        app::SnapTrapEntity_SnapTrapParameters param,
        bool can_freeze,
        bool uses_detection_zone,
        app::Rect detection_rect,
        app::SerializedBooleanUberState* thaw_state,
        app::Vector2 placeholder_scale
    )
    IL2CPP_REGISTER_METHOD(0x006D6770, void, Awake, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Start, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6970, void, OnDestroy, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6C30, void, OnEnable, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6D00, void, FixedUpdate, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D7540, void, ForceCrushDetectorsOn, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D7700, void, HandleCrushDetectors, app::SnapTrapEntity* this_ptr, bool force_opened)
    IL2CPP_REGISTER_METHOD(0x006D7940, void, Suspend, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D7AA0, void, Resume, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D7BA0, void, Freeze, app::SnapTrapEntity* this_ptr, bool frozen, bool spawn_effect)
    IL2CPP_REGISTER_METHOD(0x006D7FD0, void, ActivateTrap, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D81A0, void, InstantCatch, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D81B0, void, StartClose, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D85F0, void, CheckTrap, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D9400, void, Closed, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D9850, void, DoDamage, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D9E90, void, ReactivateOri, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DA310, void, DoneChewing, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DA740, void, OpenedAfterCatch, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DA920, void, OpenedAfterMiss, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006DAB00,
        void,
        PreapareAttachmentToPhysicsSystem,
        app::SnapTrapEntity* this_ptr,
        app::PhysicalSystemManager* manager,
        app::Rigidbody* attach_to_rigidbody,
        app::AttachJointSettings* joint_settings
    )
    IL2CPP_REGISTER_METHOD(0x00417920, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DADA0, app::TrackingExclusions, get_TrackingExclusions, app::SnapTrapEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DADB0, void, set_TrackingExclusions, app::SnapTrapEntity* this_ptr, app::TrackingExclusions value)
    IL2CPP_REGISTER_METHOD(0x006DADC0, void, ctor, app::SnapTrapEntity* this_ptr)
} // namespace app::classes::SnapTrapEntity
