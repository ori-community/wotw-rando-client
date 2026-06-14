#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFootsteps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFootsteps_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootsteps_DEFINED)
#include <Modloader/app/structs/SeinFootsteps__Fields.h>
#if defined(IL2CPP_STRUCT_SeinFootsteps__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFootsteps_DEFINED
struct SeinFootsteps__Class;
struct SeinFootsteps {
    struct SeinFootsteps__Class* klass;
    MonitorData* monitor;
    struct SeinFootsteps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFootsteps_FWDDECL)
#define IL2CPP_STRUCT_SeinFootsteps_FWDDECL
#include <Modloader/app/structs/SeinFootsteps__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinFootsteps_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootsteps_DEFINED) && !defined(IL2CPP_STRUCT_SeinFootsteps_FWDDECL)
#include <Modloader/app/structs/SeinFootsteps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFootsteps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
