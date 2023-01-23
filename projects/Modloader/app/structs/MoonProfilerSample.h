#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerSample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerSample_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerSample_DEFINED
struct MoonProfilerSample {
    float count;
    float time;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerSample_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerSample_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonProfilerSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerSample_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerSample_FWDDECL)
#include <Modloader/app/structs/MoonProfilerSample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerSample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
