#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodCall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCall__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodCall__Fields_DEFINED
struct String;
struct Object__Array;
struct Type__Array;
struct MethodBase;
struct LogicalCallContext;
struct Identity;
struct IDictionary;
struct __declspec(align(8)) MethodCall__Fields {
    struct String* _uri;
    struct String* _typeName;
    struct String* _methodName;
    struct Object__Array* _args;
    struct Type__Array* _methodSignature;
    struct MethodBase* _methodBase;
    struct LogicalCallContext* _callContext;
    struct Identity* _targetIdentity;
    struct Type__Array* _genericArguments;
    struct IDictionary* ExternalProperties;
    struct IDictionary* InternalProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_MethodCall__Fields_FWDDECL)
#define IL2CPP_STRUCT_MethodCall__Fields_FWDDECL
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_MethodCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MethodCall__Fields_FWDDECL)
#include <Modloader/app/structs/MethodCall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodCall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
