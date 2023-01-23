#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_SetupStateModifier_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/List_1_SetupStateModifierData_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::SetupControllerStateHolder {
    IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, get_UseMapping, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, get_UseUberState, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7ADC0, void, GetSetupStates, (app::SetupControllerStateHolder * this_ptr, app::List_1_IIndexedItem_* to_populate))
    IL2CPP_REGISTER_METHOD(0x01B7AEC0, int32_t, get_StateCount, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7AF50, app::Dictionary_2_System_Int32_SetupStateModifier_*, get_GuidToUberStateModifier, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7AFF0, void, BuildModifierDictionary, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7B240, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7B4A0, int32_t, get_ModifiersCount, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7B530, app::SetupStateModifier*, GetModifierAt, (app::SetupControllerStateHolder * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B7B5E0, int32_t, GetModifierIndex, (app::SetupControllerStateHolder * this_ptr, int32_t modifier_guid))
    IL2CPP_REGISTER_METHOD(0x01B7B6E0, app::SetupState*, GetStateAt, (app::SetupControllerStateHolder * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B7B790, app::List_1_SetupStateModifierData_*, GetModifierData, (app::SetupControllerStateHolder * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x01B7B970, app::SetupState*, GetStateByGuid, (app::SetupControllerStateHolder * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B7BAE0, bool, TryToGetStateByGuid, (app::SetupControllerStateHolder * this_ptr, int32_t guid, app::SetupState** state))
    IL2CPP_REGISTER_METHOD(0x01B7BBE0, bool, HasState, (app::SetupControllerStateHolder * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B7BCD0, int32_t, GetStateIndexByGuid, (app::SetupControllerStateHolder * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01B7BE20, void, AddState, (app::SetupControllerStateHolder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01B7C0D0, void, RemoveState, (app::SetupControllerStateHolder * this_ptr, app::SetupState* state))
    IL2CPP_REGISTER_METHOD(0x01B7C550, app::SetupStateModifier*, AddModifier, (app::SetupControllerStateHolder * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01B7C790, int32_t, ProduceNewGuid, (app::SetupControllerStateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7C8B0, app::SetupStateModifier*, GetUberStateModifier, (app::SetupControllerStateHolder * this_ptr, int32_t uber_state_modifier_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01B7C960, bool, ModifierDataExists, (app::SetupControllerStateHolder * this_ptr, int32_t modifier_g_u_i_d, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01B7CA90, void, SetModifier, (app::SetupControllerStateHolder * this_ptr, int32_t guid, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x01B7CB70, void, RemoveModifier_1, (app::SetupControllerStateHolder * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B7CC70, void, RemoveModifier_2, (app::SetupControllerStateHolder * this_ptr, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x01B7CD40, void, RemoveModifierDataByStateGUID, (app::SetupControllerStateHolder * this_ptr, app::SetupStateModifier* modifier, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x01B7CE40, bool, ContainsModifier, (app::SetupControllerStateHolder * this_ptr, int32_t modifier_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01B7CF00, void, ctor, (app::SetupControllerStateHolder * this_ptr))
} // namespace app::classes::SetupControllerStateHolder
