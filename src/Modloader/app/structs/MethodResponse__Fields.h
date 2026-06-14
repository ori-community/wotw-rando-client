#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodResponse__Fields_DEFINED
struct String;
struct MethodBase;
struct Object;
struct Exception;
struct Type__Array;
struct ArgInfo;
struct Object__Array;
struct IMethodCallMessage;
struct LogicalCallContext;
struct Identity;
struct IDictionary;
struct __declspec(align(8)) MethodResponse__Fields {
    struct String* _methodName;
    struct String* _uri;
    struct String* _typeName;
    struct MethodBase* _methodBase;
    struct Object* _returnValue;
    struct Exception* _exception;
    struct Type__Array* _methodSignature;
    struct ArgInfo* _inArgInfo;
    struct Object__Array* _args;
    struct Object__Array* _outArgs;
    struct IMethodCallMessage* _callMsg;
    struct LogicalCallContext* _callContext;
    struct Identity* _targetIdentity;
    struct IDictionary* ExternalProperties;
    struct IDictionary* InternalProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_MethodResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_MethodResponse__Fields_FWDDECL
#include <Modloader/app/structs/ArgInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IMethodCallMessage.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_MethodResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MethodResponse__Fields_FWDDECL)
#include <Modloader/app/structs/MethodResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
