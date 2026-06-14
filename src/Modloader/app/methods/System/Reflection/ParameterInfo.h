#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterAttributes__Enum.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::ParameterInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694630, app::String*, ToString, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026948D0,
        void,
        FormatParameters,
        app::StringBuilder* sb,
        app::ParameterInfo_1__Array* p,
        app::CallingConventions__Enum calling_convention,
        bool serialization
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ParameterType, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998570, app::ParameterAttributes__Enum, get_Attributes, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694B60, bool, get_IsIn, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694B80, bool, get_IsOptional, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694BA0, bool, get_IsOut, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694BC0, bool, get_IsRetval, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::MemberInfo_1*, get_Member, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Name, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Position, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02694BE0, app::Object__Array*, GetPseudoCustomAttributes, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, GetDefaultValueImpl, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695210, app::Object*, get_DefaultValue, app::ParameterInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695260, app::Object__Array*, GetCustomAttributes_1, app::ParameterInfo_1* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026952E0, app::Object__Array*, GetCustomAttributes_2, app::ParameterInfo_1* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02695360, app::Object*, GetRealObject, app::ParameterInfo_1* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDefined, app::ParameterInfo_1* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026953B0, app::ParameterInfo_1*, New, app::ParameterInfo_1* pinfo, app::MemberInfo_1* member)
} // namespace app::classes::System::Reflection::ParameterInfo
