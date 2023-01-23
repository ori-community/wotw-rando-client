#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/RuntimeType__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::FormatterServices {
    IL2CPP_REGISTER_METHOD(0x01D88670, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D888B0, app::MemberInfo_1__Array*, GetSerializableMembers_1, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01D88AB0, bool, CheckSerializable, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01D88AE0, app::MemberInfo_1__Array*, InternalGetSerializableMembers, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHODINFO(0x0477C6E8, FormatterServices_InternalGetSerializableMembers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D89290, bool, GetParentTypes, (app::RuntimeType * parent_type, app::RuntimeType__Array** parent_types, int32_t* parent_type_count))
    IL2CPP_REGISTER_METHOD(0x01D89620, app::MemberInfo_1__Array*, GetSerializableMembers_2, (app::Type * type, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04796F10, FormatterServices_GetSerializableMembers_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D89A90, app::Object*, GetUninitializedObject, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047403D8, FormatterServices_GetUninitializedObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D89CB0, app::Object*, GetSafeUninitializedObject, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047790F0, FormatterServices_GetSafeUninitializedObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A98CD0, app::Object*, nativeGetUninitializedObject, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01A98CD0, app::Object*, nativeGetSafeUninitializedObject, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetEnableUnsafeTypeForwarders, ())
    IL2CPP_REGISTER_METHOD(0x01D89F70, bool, UnsafeTypeForwardersIsEnabled, ())
    IL2CPP_REGISTER_METHOD(0x01D8A0A0, void, SerializationSetValue, (app::MemberInfo_1 * fi, app::Object* target, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0475EA90, FormatterServices_SerializationSetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8A360, app::Object*, PopulateObjectMembers, (app::Object * obj, app::MemberInfo_1__Array* members, app::Object__Array* data))
    IL2CPP_REGISTER_METHODINFO(0x04747920, FormatterServices_PopulateObjectMembers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8A6C0, app::Object__Array*, GetObjectData, (app::Object * obj, app::MemberInfo_1__Array* members))
    IL2CPP_REGISTER_METHODINFO(0x04709378, FormatterServices_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8AAB0, app::Type*, GetTypeFromAssembly, (app::Assembly * assem, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x0475F1B8, FormatterServices_GetTypeFromAssembly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8AB90, app::Assembly*, LoadAssemblyFromString, (app::String * assembly_name))
    IL2CPP_REGISTER_METHOD(0x01D8ABA0, app::Assembly*, LoadAssemblyFromStringNoThrow, (app::String * assembly_name))
    IL2CPP_REGISTER_METHOD(0x01D8AC60, app::String*, GetClrAssemblyName, (app::Type * type, bool* has_type_forwarded_from))
    IL2CPP_REGISTER_METHODINFO(0x0476D290, FormatterServices_GetClrAssemblyName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8AE10, app::String*, GetClrTypeFullName, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01D8AEF0, app::String*, GetClrTypeFullNameForArray, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01D8B1E0, app::String*, GetClrTypeFullNameForNonArrayTypes, (app::Type * type))
} // namespace app::classes::System::Runtime::Serialization::FormatterServices
