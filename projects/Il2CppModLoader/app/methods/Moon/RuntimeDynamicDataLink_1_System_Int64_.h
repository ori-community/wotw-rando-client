#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::RuntimeDynamicDataLink_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x0290E0D0, bool, Init, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHOD(0x0290E3B0, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1 *, get_TargetObject, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1 *, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type *, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0290E530, int64_t, GetValue, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0470CEF0, RuntimeDynamicDataLink_1_System_Int64__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0290E810, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr, app::Object_1 * target_object, app::MemberInfo_1 * target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0290E9A0, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr, app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHODINFO(0x04746FB0, RuntimeDynamicDataLink_1_System_Int64__CreateReflectionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0290EE20, app::String *, ToString, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_System_Int64_ * this_ptr))
}
