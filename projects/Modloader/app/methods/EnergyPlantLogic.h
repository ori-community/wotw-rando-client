#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnergyPlantLogic.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::EnergyPlantLogic {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C89A10, void, set_MoonSetupAnimator, app::EnergyPlantLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00C89AE0, void, OnCheckpointRestore, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C89AF0, void, Awake, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8A460, void, OnDestroy, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8A760, void, OnEnable, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8A800, void, OnDisable, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8A8A0, void, OnDamageReceived, app::EnergyPlantLogic* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x00C8AA70, void, ChangeState, app::EnergyPlantLogic* this_ptr, bool destroyed)
    IL2CPP_REGISTER_METHOD(0x00C8ACC0, bool, get_IsOnScreen, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8AEF0, void, OnFixedUpdate, app::EnergyPlantLogic* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x00C8B0B0, void, OnPostTimeSlicedEnable, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8B1F0, void, OnFrustumEnter, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8B370, void, OnFrustumExit, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_InsideFrustum, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9150, app::Bounds, get_Bounds, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8B4F0, void, ctor, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_1, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_2, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_3, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_4, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_5, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_6, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_7, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_8, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_9, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_10, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_11, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_12, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_13, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_14, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_15, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_16, app::EnergyPlantLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonTypeResolver*, GetResolverForType_17, app::EnergyPlantLogic* this_ptr)
} // namespace app::classes::EnergyPlantLogic
