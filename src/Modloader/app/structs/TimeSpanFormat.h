#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_DEFINED)
#define IL2CPP_STRUCT_TimeSpanFormat_DEFINED
struct TimeSpanFormat__Class;
struct TimeSpanFormat {
    struct TimeSpanFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanFormat_FWDDECL
#include <Modloader/app/structs/TimeSpanFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanFormat_FWDDECL)
#include <Modloader/app/structs/TimeSpanFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
