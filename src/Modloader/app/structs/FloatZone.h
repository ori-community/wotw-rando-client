#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone_DEFINED)
#include <Modloader/app/structs/FloatZone__Fields.h>
#if defined(IL2CPP_STRUCT_FloatZone__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatZone_DEFINED
struct FloatZone__Class;
struct FloatZone {
    struct FloatZone__Class* klass;
    MonitorData* monitor;
    struct FloatZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatZone_FWDDECL)
#define IL2CPP_STRUCT_FloatZone_FWDDECL
#include <Modloader/app/structs/FloatZone__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone_DEFINED) && !defined(IL2CPP_STRUCT_FloatZone_FWDDECL)
#include <Modloader/app/structs/FloatZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
