#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanConverter_DEFINED)
#define IL2CPP_STRUCT_TimeSpanConverter_DEFINED
struct TimeSpanConverter__Class;
struct TimeSpanConverter {
    struct TimeSpanConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanConverter_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanConverter_FWDDECL
#include <Modloader/app/structs/TimeSpanConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanConverter_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanConverter_FWDDECL)
#include <Modloader/app/structs/TimeSpanConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
