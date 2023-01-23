#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModularZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModularZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZone_DEFINED)
#include <Modloader/app/structs/ModularZone__Fields.h>
#if defined(IL2CPP_STRUCT_ModularZone__Fields_DEFINED)
#define IL2CPP_STRUCT_ModularZone_DEFINED
struct ModularZone__Class;
struct ModularZone {
    struct ModularZone__Class* klass;
    MonitorData* monitor;
    struct ModularZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModularZone_FWDDECL)
#define IL2CPP_STRUCT_ModularZone_FWDDECL
#include <Modloader/app/structs/ModularZone__Class.h>
#endif
#undef IL2CPP_STRUCT_ModularZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZone_DEFINED) && !defined(IL2CPP_STRUCT_ModularZone_FWDDECL)
#include <Modloader/app/structs/ModularZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModularZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
