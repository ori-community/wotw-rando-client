#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentSystemTimeZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentSystemTimeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentSystemTimeZone_DEFINED)
#include <Modloader/app/structs/CurrentSystemTimeZone__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentSystemTimeZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentSystemTimeZone_DEFINED
struct CurrentSystemTimeZone__Class;
struct CurrentSystemTimeZone {
    struct CurrentSystemTimeZone__Class* klass;
    MonitorData* monitor;
    struct CurrentSystemTimeZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentSystemTimeZone_FWDDECL)
#define IL2CPP_STRUCT_CurrentSystemTimeZone_FWDDECL
#include <Modloader/app/structs/CurrentSystemTimeZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentSystemTimeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentSystemTimeZone_DEFINED) && !defined(IL2CPP_STRUCT_CurrentSystemTimeZone_FWDDECL)
#include <Modloader/app/structs/CurrentSystemTimeZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentSystemTimeZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
