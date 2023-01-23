#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Assembly__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Assembly__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly__Fields_DEFINED)
#define IL2CPP_STRUCT_Assembly__Fields_DEFINED
struct Assembly_ResolveEventHolder;
struct Object;
struct String;
struct __declspec(align(8)) Assembly__Fields {
    void* _mono_assembly;
    struct Assembly_ResolveEventHolder* resolve_event_holder;
    struct Object* _evidence;
    struct Object* _minimum;
    struct Object* _optional;
    struct Object* _refuse;
    struct Object* _granted;
    struct Object* _denied;
    bool fromByteArray;
    struct String* assemblyName;
};
#endif
#if !defined(IL2CPP_STRUCT_Assembly__Fields_FWDDECL)
#define IL2CPP_STRUCT_Assembly__Fields_FWDDECL
#include <Modloader/app/structs/Assembly_ResolveEventHolder.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Assembly__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Assembly__Fields_FWDDECL)
#include <Modloader/app/structs/Assembly__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Assembly__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
