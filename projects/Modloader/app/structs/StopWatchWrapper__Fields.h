#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StopWatchWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StopWatchWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopWatchWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_StopWatchWrapper__Fields_DEFINED
struct Stopwatch;
struct __declspec(align(8)) StopWatchWrapper__Fields {
    struct Stopwatch* m_stopWatch;
};
#endif
#if !defined(IL2CPP_STRUCT_StopWatchWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_StopWatchWrapper__Fields_FWDDECL
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_StopWatchWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopWatchWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StopWatchWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/StopWatchWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StopWatchWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
