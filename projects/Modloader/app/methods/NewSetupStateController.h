#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/SetupStateModifierData.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::NewSetupStateController {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_GuidStr, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_TargetObject, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Component_1*, get_TargetComponent, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B75AE0, bool, get_IsActive, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B75B00, void, OnBeforeSerialize, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B75BC0, void, OnAfterDeserialize, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B75C80, app::SetupState*, get_ActiveState, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B75F60, void, OnEnable, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76000, void, OnDisable, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B760A0, void, OnValidate, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76110, void, OnDestroy, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76180, void, Awake, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B761A0, void, Apply, (app::NewSetupStateController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76200, void, EditorApply, (app::NewSetupStateController * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x01B76210, void, ApplyKnownState, (app::NewSetupStateController * this_ptr, int32_t state_g_u_i_d, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B764A0, app::String*, GetStateName, (app::NewSetupStateController * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01B76620, app::SetupState*, GetStateAt, (app::NewSetupStateController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B766F0, app::Int32__Array*, GetAllStateGUIDs, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B768D0, bool, HasStateGUID, (app::NewSetupStateController * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01B769D0, bool, get_IsPassiveStateDescriptorValid, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B769F0, int32_t, get_CurrentPassiveStateApplied, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76BA0, void, set_CurrentPassiveStateApplied, (app::NewSetupStateController * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B76C40, int32_t, get_FallbackPassiveState, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76CC0, app::IUberState__Array*, get_AffectingUberStates, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76E70, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76E90, void, ApplyData, (app::NewSetupStateController * this_ptr, app::SetupStateModifierData* modifier_data, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B76F20, app::GameObject__Array*, GetDynamicGraphicTargets, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B76FE0, void, GetManagedEarlyZDynamicGraphicTargets, (app::NewSetupStateController * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x01B77120, void, CollectDynamicGraphics, (app::NewSetupStateController * this_ptr, app::List_1_UnityEngine_GameObject_** dynamic_targets, app::List_1_UnityEngine_GameObject_** managed_early_z_targets))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_InvalidateParentTimelineCache, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_InvalidateParentTimelineCache, (app::NewSetupStateController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0050B250, void, InvalidateTimelineCache, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B777A0, void, OnPostTimeSlicedEnable, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED550, app::IMoonTypeResolver*, GetResolverForType_1, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ECBB0, app::IMoonTypeResolver*, GetResolverForType_2, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ECD10, app::IMoonTypeResolver*, GetResolverForType_3, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ECE70, app::IMoonTypeResolver*, GetResolverForType_4, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ECFD0, app::IMoonTypeResolver*, GetResolverForType_5, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED130, app::IMoonTypeResolver*, GetResolverForType_6, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED290, app::IMoonTypeResolver*, GetResolverForType_7, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED3F0, app::IMoonTypeResolver*, GetResolverForType_8, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED6B0, app::IMoonTypeResolver*, GetResolverForType_9, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED810, app::IMoonTypeResolver*, GetResolverForType_10, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018ED970, app::IMoonTypeResolver*, GetResolverForType_11, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EDAD0, app::IMoonTypeResolver*, GetResolverForType_12, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EDC30, app::IMoonTypeResolver*, GetResolverForType_13, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EDD90, app::IMoonTypeResolver*, GetResolverForType_14, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EDEF0, app::IMoonTypeResolver*, GetResolverForType_15, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EE050, app::IMoonTypeResolver*, GetResolverForType_16, (app::NewSetupStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EE1B0, app::IMoonTypeResolver*, GetResolverForType_17, (app::NewSetupStateController * this_ptr))
} // namespace app::classes::NewSetupStateController
