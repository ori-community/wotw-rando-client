#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/MethodBody.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::MethodBase {
    IL2CPP_REGISTER_METHOD(0x0268C9D0, app::MethodBase*, GetMethodFromHandle, (app::RuntimeMethodHandle handle))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CC90, bool, op_Equality, (app::MethodBase * left, app::MethodBase* right))
    IL2CPP_REGISTER_METHOD(0x0268CE30, bool, op_Inequality, (app::MethodBase * left, app::MethodBase* right))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::MethodBase * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E113B0, app::ParameterInfo_1__Array*, GetParametersNoCopy, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::CallingConventions__Enum, get_CallingConvention, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CE50, app::Type__Array*, GetGenericArguments, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethodDefinition, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContainsGenericParameters, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethod, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CEC0, bool, get_IsSecurityCritical, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CF10, app::Object*, Invoke, (app::MethodBase * this_ptr, app::Object* obj, app::Object__Array* parameters))
    IL2CPP_REGISTER_METHOD(0x0268CF50, bool, get_IsPublic, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CF80, bool, get_IsStatic, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CFA0, bool, get_IsFinal, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CFC0, bool, get_IsVirtual, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268CFE0, bool, get_IsAbstract, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D010, bool, get_IsSpecialName, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D040, bool, get_IsConstructor, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D140, app::MethodBody*, GetMethodBody_1, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D190, app::String*, ConstructParameters, (app::Type__Array * parameter_types, app::CallingConventions__Enum calling_convention, bool serialization))
    IL2CPP_REGISTER_METHOD(0x0268D4A0, app::String*, FormatNameAndSig, (app::MethodBase * this_ptr, bool serialization))
    IL2CPP_REGISTER_METHOD(0x0268D6C0, app::Type__Array*, GetParameterTypes, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E113B0, app::ParameterInfo_1__Array*, GetParametersInternal, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D830, int32_t, GetParametersCount, (app::MethodBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268D860, app::MethodBase*, GetMethodFromHandleNoGenericCheck_1, (app::RuntimeMethodHandle handle))
    IL2CPP_REGISTER_METHOD(0x0268D8E0, app::MethodBase*, GetMethodFromHandleNoGenericCheck_2, (app::RuntimeMethodHandle handle, app::RuntimeTypeHandle reflected_type))
    IL2CPP_REGISTER_METHOD(0x0268D920, app::MethodBody*, GetMethodBodyInternal, (void* handle))
    IL2CPP_REGISTER_METHOD(0x0268D930, app::MethodBody*, GetMethodBody_2, (void* handle))
    IL2CPP_REGISTER_METHOD(0x0268D940, app::MethodBase*, GetMethodFromHandleInternalType, (void* method_handle, void* type_handle))
    IL2CPP_REGISTER_METHOD(0x0268D950, app::MethodBase*, GetMethodFromHandleInternalType_native, (void* method_handle, void* type_handle, bool generic_check))
    inline bool operator==(app::MethodBase& left, app::MethodBase& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::MethodBase& left, app::MethodBase& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::System::Reflection::MethodBase
