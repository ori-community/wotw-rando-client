#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpan_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpan_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_TimeSpan_DEFINED
struct TimeSpan {
    int64_t _ticks;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpan_FWDDECL)
#define IL2CPP_STRUCT_TimeSpan_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeSpan_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpan_FWDDECL)
#include <Modloader/app/structs/TimeSpan.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpan.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
