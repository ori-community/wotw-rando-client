#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReturnMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReturnMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_ReturnMessage__Fields_DEFINED
struct Object__Array;
struct LogicalCallContext;
struct Object;
struct String;
struct Exception;
struct MethodBase;
struct Type__Array;
struct MethodReturnDictionary;
struct Identity;
struct ArgInfo;
struct __declspec(align(8)) ReturnMessage__Fields {
    struct Object__Array* _outArgs;
    struct Object__Array* _args;
    struct LogicalCallContext* _callCtx;
    struct Object* _returnValue;
    struct String* _uri;
    struct Exception* _exception;
    struct MethodBase* _methodBase;
    struct String* _methodName;
    struct Type__Array* _methodSignature;
    struct String* _typeName;
    struct MethodReturnDictionary* _properties;
    struct Identity* _targetIdentity;
    struct ArgInfo* _inArgInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_ReturnMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReturnMessage__Fields_FWDDECL
#include <Modloader/app/structs/ArgInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodReturnDictionary.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ReturnMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReturnMessage__Fields_FWDDECL)
#include <Modloader/app/structs/ReturnMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReturnMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
