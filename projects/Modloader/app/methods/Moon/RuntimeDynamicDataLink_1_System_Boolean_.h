#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02907710, bool, Init, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x029079F0, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1*, get_TargetObject, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1*, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02907B70, bool, GetValue, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04726E68, RuntimeDynamicDataLink_1_System_Boolean__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02907E50, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr, app::Object_1* target_object, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02907FE0, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x04731470, RuntimeDynamicDataLink_1_System_Boolean__CreateReflectionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02908460, app::String*, ToString, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_System_Boolean_ * this_ptr))
} // namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Boolean_
