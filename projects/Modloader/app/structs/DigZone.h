#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZone_DEFINED)
#include <Modloader/app/structs/DigZone__Fields.h>
#if defined(IL2CPP_STRUCT_DigZone__Fields_DEFINED)
#define IL2CPP_STRUCT_DigZone_DEFINED
struct DigZone__Class;
struct DigZone {
    struct DigZone__Class* klass;
    MonitorData* monitor;
    struct DigZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigZone_FWDDECL)
#define IL2CPP_STRUCT_DigZone_FWDDECL
#include <Modloader/app/structs/DigZone__Class.h>
#endif
#undef IL2CPP_STRUCT_DigZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZone_DEFINED) && !defined(IL2CPP_STRUCT_DigZone_FWDDECL)
#include <Modloader/app/structs/DigZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
