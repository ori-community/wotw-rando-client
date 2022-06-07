#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Respawner {
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::Respawner * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00907B40, void, set_Mask, (app::Respawner * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00907BF0, bool, get_IsOnScreen, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00907E20, bool, get_CanRespawn, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00907F90, void, Awake, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009082B0, void, OnDestroy, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009085D0, void, OnRestoreCheckpoint, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C688, Respawner_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00908690, void, FixedUpdate, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009086A0, void, OnTargetDestroyed, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F3A0, Respawner_OnTargetDestroyed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00908860, void, UpdateRespawner, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00908AE0, void, Respawn, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00908C00, void, Apply, (app::Respawner * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IUberState__Array *, get_AffectingUberStates, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_AffectingUberStates, (app::Respawner * this_ptr, app::IUberState__Array * value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_AllTargets, (app::Respawner * this_ptr, app::List_1_UnityEngine_GameObject_ * value))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_InvalidateParentTimelineCache, (app::Respawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_InvalidateParentTimelineCache, (app::Respawner * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00908C80, void, ctor, (app::Respawner * this_ptr))
}
