#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/BreakableWallLogic.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BreakableWallLogic {
    IL2CPP_REGISTER_METHOD(0x00D4F420, app::IUberState*, get_UberState, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4F4E0, void, set_MoonSetupAnimator, (app::BreakableWallLogic * this_ptr, app::IMoonSetupAnimator* value))
    IL2CPP_REGISTER_METHOD(0x00D4F5B0, void, Awake, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4F8B0, void, OnCheckpointRestore, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4F920, void, OnDestroy, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4FBF0, void, OnEnable, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4FC90, void, OnDisable, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4FD30, void, OnDamageReceived, (app::BreakableWallLogic * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00D502C0, void, ChangeState, (app::BreakableWallLogic * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00D503E0, bool, IsFireDamage, (app::BreakableWallLogic * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50420, void, Apply, (app::BreakableWallLogic * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00D505B0, app::IUberState__Array*, get_AffectingUberStates, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D506D0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50890, bool, get_IsAvailable, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D509F0, app::Bounds, get_Bounds, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50CA0, void, ctor, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::BreakableWallLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::BreakableWallLogic * this_ptr))
} // namespace app::classes::BreakableWallLogic
