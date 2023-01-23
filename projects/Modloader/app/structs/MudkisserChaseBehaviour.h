#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserChaseBehaviour_DEFINED)
#include <Modloader/app/structs/MudkisserChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MudkisserChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MudkisserChaseBehaviour_DEFINED
struct MudkisserChaseBehaviour__Class;
struct MudkisserChaseBehaviour {
    struct MudkisserChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct MudkisserChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MudkisserChaseBehaviour_FWDDECL
#include <Modloader/app/structs/MudkisserChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MudkisserChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/MudkisserChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
