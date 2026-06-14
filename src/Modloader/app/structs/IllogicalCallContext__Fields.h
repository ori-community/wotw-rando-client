#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IllogicalCallContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IllogicalCallContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IllogicalCallContext__Fields_DEFINED)
#define IL2CPP_STRUCT_IllogicalCallContext__Fields_DEFINED
struct Hashtable;
struct Object;
struct __declspec(align(8)) IllogicalCallContext__Fields {
    struct Hashtable* m_Datastore;
    struct Object* m_HostContext;
};
#endif
#if !defined(IL2CPP_STRUCT_IllogicalCallContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_IllogicalCallContext__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_IllogicalCallContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IllogicalCallContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IllogicalCallContext__Fields_FWDDECL)
#include <Modloader/app/structs/IllogicalCallContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IllogicalCallContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
