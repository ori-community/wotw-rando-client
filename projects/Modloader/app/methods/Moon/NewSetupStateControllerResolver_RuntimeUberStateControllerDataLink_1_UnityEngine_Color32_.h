#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData.h>
#include <Modloader/app/structs/SetupStateModifierData.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x027368B0, bool, Init, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData* serialized_data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x02736BB0, bool, get_IsValid, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::MemberInfo_1*, get_TargetMemberInfo, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Type*, get_ReturnedValueType, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027274C0, int32_t, get_StateGUID, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727500, int32_t, get_ModifierGUID, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727540, app::SetupStateModifierDataType__Enum, get_ModifierDataClassType, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02727580, app::NewSetupStateController*, get_TargetController, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027275C0, app::SetupStateModifierData*, get_ModifierData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData*, get_Data, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02736D90, app::Color32, GetValue, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02737070, bool, IsLinkForObjectAndMemberInfoCombo, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr, app::NewSetupStateController* target_controller, int32_t state_guid, int32_t modifier_guid, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CFFD20, app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData*, GetSerializedData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02737290, void, CreateReflectionModifierData, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x027377C0, void, CreateReflectionModifier, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x02737CD0, app::String*, ToString, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_ * this_ptr))
} // namespace app::classes::Moon::NewSetupStateControllerResolver_RuntimeUberStateControllerDataLink_1_UnityEngine_Color32_
