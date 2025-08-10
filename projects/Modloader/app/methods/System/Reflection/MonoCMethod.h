#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeData_.h>
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/MethodBody.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#include <Modloader/app/structs/MonoCMethod.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::MonoCMethod {
    IL2CPP_REGISTER_METHOD(0x0268F2D0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F300, app::ParameterInfo_1__Array*, GetParameters, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F300, app::ParameterInfo_1__Array*, GetParametersInternal, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F340, int32_t, GetParametersCount, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0268F380,
        app::Object*,
        InternalInvoke_1,
        app::MonoCMethod* this_ptr,
        app::Object* obj,
        app::Object__Array* parameters,
        app::Exception** exc
    )
    IL2CPP_REGISTER_METHOD(
        0x0268F390,
        app::Object*,
        Invoke_1,
        app::MonoCMethod* this_ptr,
        app::Object* obj,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(
        0x0268F500,
        app::Object*,
        DoInvoke,
        app::MonoCMethod* this_ptr,
        app::Object* obj,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x0268F750, app::Object*, InternalInvoke_2, app::MonoCMethod* this_ptr, app::Object* obj, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x0268F860,
        app::Object*,
        Invoke_2,
        app::MonoCMethod* this_ptr,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RuntimeMethodHandle, get_MethodHandle, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F890, app::MethodAttributes__Enum, get_Attributes, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F8A0, app::CallingConventions__Enum, get_CallingConvention, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F8D0, bool, get_ContainsGenericParameters, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_ReflectedType, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F910, app::Type*, get_DeclaringType, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F940, app::String*, get_Name, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268F980, bool, IsDefined, app::MonoCMethod* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0268FA40, app::Object__Array*, GetCustomAttributes_1, app::MonoCMethod* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0268FAF0, app::Object__Array*, GetCustomAttributes_2, app::MonoCMethod* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0268FBB0, app::MethodBody*, GetMethodBody, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268FBD0, app::String*, ToString, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268FE80, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributesData, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_core_clr_security_level, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSecurityCritical, app::MonoCMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268FE90, void, ctor, app::MonoCMethod* this_ptr)
} // namespace app::classes::System::Reflection::MonoCMethod
