#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ingest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ingest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ingest_DEFINED)
#include <Modloader/app/structs/Ingest__Fields.h>
#if defined(IL2CPP_STRUCT_Ingest__Fields_DEFINED)
#define IL2CPP_STRUCT_Ingest_DEFINED
struct Ingest__Class;
struct Ingest {
    struct Ingest__Class* klass;
    MonitorData* monitor;
    struct Ingest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ingest_FWDDECL)
#define IL2CPP_STRUCT_Ingest_FWDDECL
#include <Modloader/app/structs/Ingest__Class.h>
#endif
#undef IL2CPP_STRUCT_Ingest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ingest_DEFINED) && !defined(IL2CPP_STRUCT_Ingest_FWDDECL)
#include <Modloader/app/structs/Ingest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ingest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
