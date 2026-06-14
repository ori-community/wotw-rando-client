#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethodMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethodMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__Fields_DEFINED)
#include <Modloader/app/structs/CallType__Enum.h>
#if defined(IL2CPP_STRUCT_CallType__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoMethodMessage__Fields_DEFINED
struct MonoMethod;
struct Object__Array;
struct String__Array;
struct Byte__Array;
struct LogicalCallContext;
struct Object;
struct Exception;
struct AsyncResult;
struct String;
struct MCMDictionary;
struct Type__Array;
struct Identity;
struct __declspec(align(8)) MonoMethodMessage__Fields {
    struct MonoMethod* method;
    struct Object__Array* args;
    struct String__Array* names;
    struct Byte__Array* arg_types;
    struct LogicalCallContext* ctx;
    struct Object* rval;
    struct Exception* exc;
    struct AsyncResult* asyncResult;
    CallType__Enum call_type;

    struct String* uri;
    struct MCMDictionary* properties;
    struct Type__Array* methodSignature;
    struct Identity* identity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoMethodMessage__Fields_FWDDECL
#include <Modloader/app/structs/AsyncResult.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MCMDictionary.h>
#include <Modloader/app/structs/MonoMethod.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_MonoMethodMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethodMessage__Fields_FWDDECL)
#include <Modloader/app/structs/MonoMethodMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethodMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
