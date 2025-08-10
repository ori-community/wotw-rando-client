#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/CustomAttributeData.h>
#include <Modloader/app/structs/CustomAttributeNamedArgument__Array.h>
#include <Modloader/app/structs/CustomAttributeTypedArgument__Array.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeData_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeNamedArgument_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeTypedArgument_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::CustomAttributeData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0267D660,
        void,
        ctor_2,
        app::CustomAttributeData* this_ptr,
        app::ConstructorInfo* ctor_info,
        app::Assembly* assembly,
        void* data,
        uint32_t data_length
    )
    IL2CPP_REGISTER_METHOD(
        0x0267D7F0,
        void,
        ResolveArgumentsInternal,
        app::ConstructorInfo* ctor,
        app::Assembly* assembly,
        void* data,
        uint32_t data_length,
        app::Object__Array** ctor_args,
        app::Object__Array** named_args
    )
    IL2CPP_REGISTER_METHOD(0x0267D810, void, ResolveArguments, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ConstructorInfo*, get_Constructor, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0267D940,
        app::IList_1_System_Reflection_CustomAttributeTypedArgument_*,
        get_ConstructorArguments,
        app::CustomAttributeData* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0267D960, app::IList_1_System_Reflection_CustomAttributeNamedArgument_*, get_NamedArguments, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267D980, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributes_1, app::Assembly* target)
    IL2CPP_REGISTER_METHOD(0x0267DA20, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributes_2, app::MemberInfo_1* target)
    IL2CPP_REGISTER_METHOD(0x01EEAC20, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributesInternal, app::RuntimeType* target)
    IL2CPP_REGISTER_METHOD(0x0267DAC0, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributes_3, app::Module* target)
    IL2CPP_REGISTER_METHOD(0x0267DB60, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributes_4, app::ParameterInfo_1* target)
    IL2CPP_REGISTER_METHOD(0x01717090, app::Type*, get_AttributeType, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267DC00, app::String*, ToString, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267E2D0, bool, Equals, app::CustomAttributeData* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0267E6C0, int32_t, GetHashCode, app::CustomAttributeData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01586F90, app::Object__Array*, UnboxValues_1, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(0x01587200, app::CustomAttributeTypedArgument__Array*, UnboxValues_2, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(0x015870C0, app::CustomAttributeNamedArgument__Array*, UnboxValues_3, app::Object__Array* values)
} // namespace app::classes::System::Reflection::CustomAttributeData
