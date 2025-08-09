#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IPortalVisitor.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/Portal.h>
#include <Modloader/app/structs/Portal_AssistConfig.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Portal {
    IL2CPP_REGISTER_METHOD(0x00C60E20, app::SceneRoot*, get_SceneRoot, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_InsideFrustum, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C60F10, void, OnFrustumEnter, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C60F20, void, OnFrustumExit, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C60F50, void, Suspend, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C610E0, void, Resume, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C61270, app::Bounds, get_Bounds, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C61370, app::ISoundHost*, get_SoundHost, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_CenterPosition, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C61460, void, Awake, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C61700, void, OnDestroy, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C617B0, void, DestroyEnterAndExitEffects, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C617D0, void, DestroyEnterEffect, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C618D0, void, DestroyExitEffect, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C619D0, bool, get_OriInsideAnticipationZone, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C61C60, void, UpdateAnticipationEffects, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C62650, void, OnEnable, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C62920, void, OnDisable, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C629D0, float, OutwardFacingWorldDistance, app::Portal* this_ptr, app::Vector3 world_pos)
    IL2CPP_REGISTER_METHOD(0x00C62BA0, bool, IsPointInsidePortalLane, app::Portal* this_ptr, app::Vector3 world_pos)
    IL2CPP_REGISTER_METHOD(0x00C62D30, float, SidewaysLocalDistance, app::Portal* this_ptr, app::Vector3 world_pos)
    IL2CPP_REGISTER_METHOD(0x00C62EB0, float, SidewaysWorldDistance, app::Portal* this_ptr, app::Vector3 world_pos)
    IL2CPP_REGISTER_METHOD(0x00C63130, float, get_PortalWorldWidth, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C632C0, void, OnUpdate, app::Portal* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x00C63E60, app::Vector3, get_OutwardsFacingWorldDir, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C64100, void, PerformPortalTeleportation, app::Portal* this_ptr, app::IPortalVisitor* portal_visitor)
    IL2CPP_REGISTER_METHOD(0x00C655F0, app::Vector3, ClampPosition, app::Portal* this_ptr, app::Vector3 position, app::Portal* portal)
    IL2CPP_REGISTER_METHOD(0x00C65920, app::IEnumerator*, DisableOriForABit, app::Portal* this_ptr, app::Portal* other)
    IL2CPP_REGISTER_METHOD(0x00C65A80, app::Vector3, CalculateEndPosition_1, app::Portal* this_ptr, app::Portal* other, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x00C65C80,
        app::Vector3,
        CalculateEndPosition_2,
        app::Portal* this_ptr,
        app::Portal* other,
        app::Vector3 position,
        app::Portal_AssistConfig* config
    )
    IL2CPP_REGISTER_METHOD(0x00C65D00, app::Vector3, CalculateEndSpeed_1, app::Portal* this_ptr, app::Portal* other, app::Vector3 speed)
    IL2CPP_REGISTER_METHOD(
        0x00C66060,
        app::Vector3,
        CalculateEndSpeed_2,
        app::Portal* this_ptr,
        app::Portal* other,
        app::Vector3 speed,
        app::Portal_AssistConfig* config
    )
    IL2CPP_REGISTER_METHOD(0x00C661F0, bool, IsInLocalPortal, app::Portal* this_ptr, app::Vector3 local_position)
    IL2CPP_REGISTER_METHOD(0x00C661F0, bool, IsApproaching, app::Portal* this_ptr, app::Vector3 local_speed)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C66220, bool, IsSein, app::Portal* this_ptr, app::IPortalVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x00C66460, app::Portal_AssistConfig*, GetAssistConfig, app::Portal* this_ptr, app::IPortalVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C66640, void, PlaySound, app::Portal* this_ptr, app::Event_1* sound)
    IL2CPP_REGISTER_METHOD(0x00C66750, void, PlayAnticipationSound, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C668C0, void, StopAnticipationSound, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C668E0, void, Prewarm, app::Portal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C66970, void, ctor, app::Portal* this_ptr)
} // namespace app::classes::Portal
