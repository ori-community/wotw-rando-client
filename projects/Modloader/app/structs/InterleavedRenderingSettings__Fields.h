#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_DEFINED
struct InterleavedRenderingSettings_PerSlice__Array;
struct InterleavedRenderingSettings_SliceLoop;
struct __declspec(align(8)) InterleavedRenderingSettings__Fields {
    struct InterleavedRenderingSettings_PerSlice__Array* slices;
    struct InterleavedRenderingSettings_SliceLoop* bgLoop;
    struct InterleavedRenderingSettings_SliceLoop* fgLoop;
};
#endif
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_FWDDECL
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop.h>
#endif
#undef IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_FWDDECL)
#include <Modloader/app/structs/InterleavedRenderingSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterleavedRenderingSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
