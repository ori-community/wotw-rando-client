#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_DEFINED)
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_DEFINED
struct __declspec(align(8)) InterleavedRenderingSettings_PerSlice__Fields {
    int32_t index;
    struct Vector2 prevDrsScale;
    struct Int2 sliceSize;
    float xMovementScale;
    bool overwrite;
    bool enabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_PerSlice__Fields_FWDDECL)
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
