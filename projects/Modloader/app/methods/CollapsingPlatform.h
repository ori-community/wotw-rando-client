#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CollapsingPlatform.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/NamedValue_1_System_Boolean___Array.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/DigZone.h>

namespace app::classes::CollapsingPlatform {
    IL2CPP_REGISTER_METHOD(0x012C71C0, bool, get_IsCollapsed, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C7310, void, set_IsCollapsed, (app::CollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012C77A0, app::CageStructureTool*, get_CageStructure, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C7870, app::GameObject*, get_Platform, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C78A0, app::GameObject*, get_AnimatedObject, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C78D0, void, Awake, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C8070, void, DamageReceived, (app::CollapsingPlatform * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x04767AC0, CollapsingPlatform_DamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C8380, void, GetDigZone, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C85A0, void, OnActivatePlatform, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752460, CollapsingPlatform_OnActivatePlatform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C8670, void, OnDigStartedInZone, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FDA0, CollapsingPlatform_OnDigStartedInZone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C86A0, void, OnDestroy, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C8C60, void, OnWallJumpPerformed, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790DB0, CollapsingPlatform_OnWallJumpPerformed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C8C90, void, OnCollisionEnter, (app::CollapsingPlatform * this_ptr, app::Collision* other))
    IL2CPP_REGISTER_METHOD(0x012C8C90, void, ReceivedOnCollisionEnter, (app::CollapsingPlatform * this_ptr, app::Collision* other))
    IL2CPP_REGISTER_METHOD(0x012C8D60, void, OnEnable, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C8ED0, void, OnDisable, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9010, void, FixedUpdate, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9300, void, PerformCollapse, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9470, void, PerformFastColapse, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9640, void, OnLandOnGround, (app::CollapsingPlatform * this_ptr, app::Vector3 position, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x04709990, CollapsingPlatform_OnLandOnGround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C9A30, void, Respawn, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9C10, app::String*, get_StressTestName, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9C90, void, StartStressTest, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::CollapsingPlatform * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC050, app::StressTestStatus__Enum, get_StressTestStatus, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9CC0, void, set_StressTestStatus, (app::CollapsingPlatform * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x012C9CD0, bool, get_CanExecuteStressTest, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9E70, void, Apply, (app::CollapsingPlatform * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x012CA040, app::IUberState__Array*, get_AffectingUberStates, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CA0B0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CA270, bool, get_Value, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CA280, void, set_Value, (app::CollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_DefaultBooleanValue, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_DefaultBooleanValue, (app::CollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::NamedValue_1_System_Boolean___Array*, get_Options, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CA330, app::IDesiredUberState*, GetRequirementsForTimeline, (app::CollapsingPlatform * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x012CA690, float, get_GenericValue, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CA6B0, void, set_GenericValue, (app::CollapsingPlatform * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FC5390, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC53A0, void, set_VolitileGenericOverrideValue, (app::CollapsingPlatform * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x012CA6D0, void, Validate, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CAB10, app::CollapsingPlatform*, GetCollapsingPlatformFromDigZone, (app::DigZone * dig_zone))
    IL2CPP_REGISTER_METHOD(0x012CAC40, void, OnRestoreCheckpoint, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785D00, CollapsingPlatform_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012CAC50, void, ctor, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CAD00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x012CAE70, void, _DamageReceived_b__23_0, (app::CollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047802D0, CollapsingPlatform__DamageReceived_b__23_0__MethodInfo)
} // namespace app::classes::CollapsingPlatform
