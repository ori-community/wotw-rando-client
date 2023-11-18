#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LegacyCollapsingPlatform.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NamedValue_1_System_Boolean___Array.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::LegacyCollapsingPlatform {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::GameObject*, get_PlatformGameObject, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::GameObject*, get_VisualsGameObject, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14240, bool, get_IsCollapsed, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14250, void, set_IsCollapsed, (app::LegacyCollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A14260, app::CageStructureTool*, get_CageStructure, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14330, void, Awake, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14630, void, OnDestroy, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14810, void, OnWallJumpPerformed, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14990, void, OnCollisionEnter, (app::LegacyCollapsingPlatform * this_ptr, app::Collision* other))
    IL2CPP_REGISTER_METHOD(0x00A14A70, void, OnEnable, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14B30, void, OnDisable, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A14C00, void, FixedUpdate, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15160, void, Collapse, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15360, void, Respawn, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A155A0, app::String*, get_StressTestName, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15620, void, StartStressTest, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::LegacyCollapsingPlatform * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, app::StressTestStatus__Enum, get_StressTestStatus, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15650, void, set_StressTestStatus, (app::LegacyCollapsingPlatform * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A15660, bool, get_CanExecuteStressTest, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15800, void, Apply, (app::LegacyCollapsingPlatform * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00A15C00, app::IUberState__Array*, get_AffectingUberStates, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15C70, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15E30, bool, get_Value, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15F80, void, set_Value, (app::LegacyCollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_DefaultBooleanValue, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_DefaultBooleanValue, (app::LegacyCollapsingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::NamedValue_1_System_Boolean___Array*, get_Options, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A16040, app::IDesiredUberState*, GetRequirementsForTimeline, (app::LegacyCollapsingPlatform * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00A16380, float, get_GenericValue, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A163A0, void, set_GenericValue, (app::LegacyCollapsingPlatform * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A163C0, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A163D0, void, set_VolitileGenericOverrideValue, (app::LegacyCollapsingPlatform * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x00A163E0, void, OnValidate, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A165B0, void, ctor, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_1, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_2, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_3, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_4, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_5, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_6, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_7, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_8, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_9, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_10, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_11, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_12, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_13, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_14, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_15, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_16, (app::LegacyCollapsingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_17, (app::LegacyCollapsingPlatform * this_ptr))
} // namespace app::classes::LegacyCollapsingPlatform
