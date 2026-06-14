#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanParse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanParse_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_DEFINED)
#define IL2CPP_STRUCT_TimeSpanParse_DEFINED
struct TimeSpanParse__Class;
struct TimeSpanParse {
    struct TimeSpanParse__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanParse_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanParse_FWDDECL
#include <Modloader/app/structs/TimeSpanParse__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanParse_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanParse_FWDDECL)
#include <Modloader/app/structs/TimeSpanParse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanParse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
