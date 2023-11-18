#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentServerStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentServerStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentServerStats_DEFINED)
#include <Modloader/app/structs/CurrentServerStats__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentServerStats__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentServerStats_DEFINED
struct CurrentServerStats__Class;
struct CurrentServerStats {
    struct CurrentServerStats__Class* klass;
    MonitorData* monitor;
    struct CurrentServerStats__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentServerStats_FWDDECL)
#define IL2CPP_STRUCT_CurrentServerStats_FWDDECL
#include <Modloader/app/structs/CurrentServerStats__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentServerStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentServerStats_DEFINED) && !defined(IL2CPP_STRUCT_CurrentServerStats_FWDDECL)
#include <Modloader/app/structs/CurrentServerStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentServerStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
