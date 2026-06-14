#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanStorage_DEFINED)
#include <Modloader/app/structs/TimeSpanStorage__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSpanStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSpanStorage_DEFINED
struct TimeSpanStorage__Class;
struct TimeSpanStorage {
    struct TimeSpanStorage__Class* klass;
    MonitorData* monitor;
    struct TimeSpanStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanStorage_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanStorage_FWDDECL
#include <Modloader/app/structs/TimeSpanStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanStorage_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanStorage_FWDDECL)
#include <Modloader/app/structs/TimeSpanStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
