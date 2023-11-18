#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_DEFINED
struct CCDistanceMapGenerator_Pixel__Array;
struct CCDistanceMapGenerator__StaticFields {
    int32_t width;
    int32_t height;
    struct CCDistanceMapGenerator_Pixel__Array* pixels;
};
#endif
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_FWDDECL
#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel__Array.h>
#endif
#undef IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CCDistanceMapGenerator__StaticFields_FWDDECL)
#include <Modloader/app/structs/CCDistanceMapGenerator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCDistanceMapGenerator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
