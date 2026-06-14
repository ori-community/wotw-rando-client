#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetStat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetStat_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStat_DEFINED)
#include <Modloader/app/structs/GetStat__Fields.h>
#if defined(IL2CPP_STRUCT_GetStat__Fields_DEFINED)
#define IL2CPP_STRUCT_GetStat_DEFINED
struct GetStat__Class;
struct GetStat {
    struct GetStat__Class* klass;
    MonitorData* monitor;
    struct GetStat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetStat_FWDDECL)
#define IL2CPP_STRUCT_GetStat_FWDDECL
#include <Modloader/app/structs/GetStat__Class.h>
#endif
#undef IL2CPP_STRUCT_GetStat_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStat_DEFINED) && !defined(IL2CPP_STRUCT_GetStat_FWDDECL)
#include <Modloader/app/structs/GetStat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetStat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
