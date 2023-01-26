#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeDynamicDataLink_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/DynamicDataLinkSerializedData.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ {
    IL2CPP_REGISTER_METHOD(0x029115B0, bool, Init, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x02911890, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1*, get_TargetObject, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1*, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02911A10, app::Bounds, GetValue, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02911D20, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr, app::Object_1* target_object, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02911EB0, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x02912330, app::String*, ToString, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_UnityEngine_Bounds_ * this_ptr))
} // namespace app::classes::Moon::RuntimeDynamicDataLink_1_UnityEngine_Bounds_
