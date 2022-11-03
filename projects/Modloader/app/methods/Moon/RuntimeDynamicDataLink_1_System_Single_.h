#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02910410, bool, Init, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x029106F0, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1*, get_TargetObject, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1*, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02910870, float, GetValue, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04735478, RuntimeDynamicDataLink_1_System_Single__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02910B50, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr, app::Object_1* target_object, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02910CE0, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x04719C40, RuntimeDynamicDataLink_1_System_Single__CreateReflectionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02911160, app::String*, ToString, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_System_Single_ * this_ptr))
} // namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Single_
