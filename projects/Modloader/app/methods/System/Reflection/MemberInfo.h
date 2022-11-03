#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::MemberInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemberInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268AF40, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributesData, (app::MemberInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475C6D0, MemberInfo_1_GetCustomAttributesData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268AF90, int32_t, get_MetadataToken, (app::MemberInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268B130, app::Module*, get_Module, (app::MemberInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753010, MemberInfo_1_get_Module__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268B2B0, bool, op_Equality, (app::MemberInfo_1 * left, app::MemberInfo_1* right))
    IL2CPP_REGISTER_METHOD(0x0268B5F0, bool, op_Inequality, (app::MemberInfo_1 * left, app::MemberInfo_1* right))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::MemberInfo_1 * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::MemberInfo_1 * this_ptr))
    inline bool operator==(app::MemberInfo_1& left, app::MemberInfo_1& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::MemberInfo_1& left, app::MemberInfo_1& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::System::Reflection::MemberInfo
