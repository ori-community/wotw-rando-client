#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/ShootableCreepLogic.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::ShootableCreepLogic {
    IL2CPP_REGISTER_METHOD(0x005B9760, app::IUberState*, get_UberState, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object_1*, get_ObjectReference, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::MoonReference_1_IGenericUberState_*, get_SharedState, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_SharedState, app::ShootableCreepLogic* this_ptr, app::MoonReference_1_IGenericUberState_* value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9820, void, set_MoonSetupAnimator, app::ShootableCreepLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x005B98F0, void, Awake, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9AB0, void, OnDestroy, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9C60, void, OnEnable, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9D00, void, OnDisable, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9DA0, void, OnDamageReceived, app::ShootableCreepLogic* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x005BA050, void, ChangeState, app::ShootableCreepLogic* this_ptr, bool destroyed)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BA0C0, void, Apply, app::ShootableCreepLogic* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x005BA210, app::IUberState__Array*, get_AffectingUberStates, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BA330, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BA4F0, void, SetHitboxParametersFromVisuals, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BA8A0, void, ctor, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::ShootableCreepLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::ShootableCreepLogic* this_ptr)
} // namespace app::classes::ShootableCreepLogic
