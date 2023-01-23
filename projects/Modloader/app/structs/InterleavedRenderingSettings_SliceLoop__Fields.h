#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_DEFINED)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_DEFINED
struct InterleavedRenderingSettings_PerSlice__Array;
struct __declspec(align(8)) InterleavedRenderingSettings_SliceLoop__Fields {
    struct InterleavedRenderingSettings_PerSlice__Array* slices;
    int32_t sliceBase;
    int32_t sliceCount;
    int32_t readWriteIndex;
    int32_t sliceIndexToStore;
    int32_t sliceIndexToReuse;
};
#endif
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_FWDDECL
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array.h>
#endif
#undef IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_SliceLoop__Fields_FWDDECL)
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
