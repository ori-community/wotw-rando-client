#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLaunch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLaunch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLaunch_DEFINED)
#include <Modloader/app/structs/SeinLaunch__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLaunch__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLaunch_DEFINED
struct SeinLaunch__Class;
struct SeinLaunch {
    struct SeinLaunch__Class* klass;
    MonitorData* monitor;
    struct SeinLaunch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLaunch_FWDDECL)
#define IL2CPP_STRUCT_SeinLaunch_FWDDECL
#include <Modloader/app/structs/SeinLaunch__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLaunch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLaunch_DEFINED) && !defined(IL2CPP_STRUCT_SeinLaunch_FWDDECL)
#include <Modloader/app/structs/SeinLaunch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLaunch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
