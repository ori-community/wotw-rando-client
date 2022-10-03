#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SetupStateModifier {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Index, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144F60, app::String*, get_Name, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NotMappable, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03145050, app::GameObject*, get_ModifierGameObjectTarget, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03145100, app::Transform*, get_ModifierTransformTarget, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03145210, void, ctor, (app::SetupStateModifier * this_ptr, int32_t guid, app::List_1_SetupState_* states, app::Type* modifier_data_type))
    IL2CPP_REGISTER_METHOD(0x03145440, int32_t, get_ModifierDataCount, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031454D0, app::SetupStateModifierData*, GetUberStateModifierDataAt_1, (app::SetupStateModifier * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x03145580, app::SetupStateModifierData*, GetUberStateModifierData_1, (app::SetupStateModifier * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHODINFO(0x047667F0, SetupStateModifier_GetUberStateModifierData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031457F0, int32_t, GetUberStateModifierDataIndex, (app::SetupStateModifier * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHODINFO(0x047483D8, SetupStateModifier_GetUberStateModifierDataIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03145A60, app::SetupStateModifierData*, GetCorrectUberStateModifierDataType, (app::SetupStateModifier * this_ptr, app::SetupStateModifierData* uber_state_modifier_data))
    IL2CPP_REGISTER_METHOD(0x03145C80, void, AddData, (app::SetupStateModifier * this_ptr, app::SetupStateModifierData* modifier_data, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x03145D40, void, RemoveDataWithStateGuid, (app::SetupStateModifier * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x03145E30, app::SetupStateModifierDataType__Enum, get_ModifierDataClassID, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03145EE0, app::Type*, get_DataClassType, (app::SetupStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03145F90, void, OnTargetChange, (app::SetupStateModifier * this_ptr, app::GameObject* old_target, app::GameObject* new_target))
    IL2CPP_REGISTER_METHOD(0x016ABD60, app::Object*, GetUberStateModifierDataAt_2, (app::SetupStateModifier * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x016ABAC0, app::Object*, GetUberStateModifierData_2, (app::SetupStateModifier * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHODINFO(0x0477FD00, SetupStateModifier_GetUberStateModifierData_1__MethodInfo)
} // namespace app::classes::SetupStateModifier
