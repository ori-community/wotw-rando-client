#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::FSharpUtils {
    IL2CPP_REGISTER_METHOD(0x01C11750, void, set_FSharpCoreAssembly, (app::Assembly * value))
    IL2CPP_REGISTER_METHOD(0x01C11800, app::MethodCall_2_System_Object_System_Object_*, get_IsUnion, ())
    IL2CPP_REGISTER_METHOD(0x01C118A0, void, set_IsUnion, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11950, app::MethodCall_2_System_Object_System_Object_*, get_GetUnionCases, ())
    IL2CPP_REGISTER_METHOD(0x01C119F0, void, set_GetUnionCases, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11AA0, app::MethodCall_2_System_Object_System_Object_*, get_PreComputeUnionTagReader, ())
    IL2CPP_REGISTER_METHOD(0x01C11B40, void, set_PreComputeUnionTagReader, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11BF0, app::MethodCall_2_System_Object_System_Object_*, get_PreComputeUnionReader, ())
    IL2CPP_REGISTER_METHOD(0x01C11C90, void, set_PreComputeUnionReader, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11D40, app::MethodCall_2_System_Object_System_Object_*, get_PreComputeUnionConstructor, ())
    IL2CPP_REGISTER_METHOD(0x01C11DE0, void, set_PreComputeUnionConstructor, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11E90, app::Func_2_Object_Object_*, get_GetUnionCaseInfoDeclaringType, ())
    IL2CPP_REGISTER_METHOD(0x01C11F30, void, set_GetUnionCaseInfoDeclaringType, (app::Func_2_Object_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C11FE0, app::Func_2_Object_Object_*, get_GetUnionCaseInfoName, ())
    IL2CPP_REGISTER_METHOD(0x01C12080, void, set_GetUnionCaseInfoName, (app::Func_2_Object_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C12130, app::Func_2_Object_Object_*, get_GetUnionCaseInfoTag, ())
    IL2CPP_REGISTER_METHOD(0x01C121D0, void, set_GetUnionCaseInfoTag, (app::Func_2_Object_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C12280, app::MethodCall_2_System_Object_System_Object_*, get_GetUnionCaseInfoFields, ())
    IL2CPP_REGISTER_METHOD(0x01C12320, void, set_GetUnionCaseInfoFields, (app::MethodCall_2_System_Object_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x01C123D0, void, EnsureInitialized, (app::Assembly * fsharp_core_assembly))
    IL2CPP_REGISTER_METHOD(0x01C12F10, app::MethodInfo_1*, GetMethodWithNonPublicFallback, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x01C12FF0, app::MethodCall_2_System_Object_System_Object_*, CreateFSharpFuncCall, (app::Type * type, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x01C13340, app::ObjectConstructor_1_System_Object_*, CreateSeq, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01C134D0, app::ObjectConstructor_1_System_Object_*, CreateMap, (app::Type * key_type, app::Type* value_type))
    IL2CPP_REGISTER_METHOD(0x01C13700, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x018F0440, app::ObjectConstructor_1_System_Object_*, BuildMapCreator, ())
} // namespace app::classes::Newtonsoft::Json::Utilities::FSharpUtils
