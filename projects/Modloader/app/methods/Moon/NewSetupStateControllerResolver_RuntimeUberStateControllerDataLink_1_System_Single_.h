#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02733720, bool, Init, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData* serialized_data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x02733A20, bool, get_IsValid, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::MemberInfo_1*, get_TargetMemberInfo, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Type*, get_ReturnedValueType, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027274C0, int32_t, get_StateGUID, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727500, int32_t, get_ModifierGUID, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727540, app::SetupStateModifierDataType__Enum, get_ModifierDataClassType, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727580, app::NewSetupStateController*, get_TargetController, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027275C0, app::SetupStateModifierData*, get_ModifierData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData*, get_Data, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02733C00, float, GetValue, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04767478, NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02733EE0, bool, IsLinkForObjectAndMemberInfoCombo, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr, app::NewSetupStateController* target_controller, int32_t state_guid, int32_t modifier_guid, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CFFD20, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData*, GetSerializedData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02734100, void, CreateReflectionModifierData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x04768A90, NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single__CreateReflectionModifierData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02734630, void, CreateReflectionModifier, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x0470C740, NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single__CreateReflectionModifier__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02734B40, app::String*, ToString, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_ * this_ptr))
} // namespace app::classes::Moon::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_System_Single_
