#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruLookUpZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruLookUpZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruLookUpZone_DEFINED)
#include <Modloader/app/structs/NaruLookUpZone__Fields.h>
#if defined(IL2CPP_STRUCT_NaruLookUpZone__Fields_DEFINED)
#define IL2CPP_STRUCT_NaruLookUpZone_DEFINED
struct NaruLookUpZone__Class;
struct NaruLookUpZone {
    struct NaruLookUpZone__Class* klass;
    MonitorData* monitor;
    struct NaruLookUpZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruLookUpZone_FWDDECL)
#define IL2CPP_STRUCT_NaruLookUpZone_FWDDECL
#include <Modloader/app/structs/NaruLookUpZone__Class.h>
#endif
#undef IL2CPP_STRUCT_NaruLookUpZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruLookUpZone_DEFINED) && !defined(IL2CPP_STRUCT_NaruLookUpZone_FWDDECL)
#include <Modloader/app/structs/NaruLookUpZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruLookUpZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
