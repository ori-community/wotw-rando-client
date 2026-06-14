#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandstormZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandstormZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormZone_DEFINED)
#include <Modloader/app/structs/SandstormZone__Fields.h>
#if defined(IL2CPP_STRUCT_SandstormZone__Fields_DEFINED)
#define IL2CPP_STRUCT_SandstormZone_DEFINED
struct SandstormZone__Class;
struct SandstormZone {
    struct SandstormZone__Class* klass;
    MonitorData* monitor;
    struct SandstormZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandstormZone_FWDDECL)
#define IL2CPP_STRUCT_SandstormZone_FWDDECL
#include <Modloader/app/structs/SandstormZone__Class.h>
#endif
#undef IL2CPP_STRUCT_SandstormZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormZone_DEFINED) && !defined(IL2CPP_STRUCT_SandstormZone_FWDDECL)
#include <Modloader/app/structs/SandstormZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandstormZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
