#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_DEFINED
struct __declspec(align(8)) CCDistanceMapGenerator_Pixel__Fields {
    float alpha;
    float distance;
    struct Vector2 gradient;
    int32_t dX;
    int32_t dY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_Pixel__Fields_FWDDECL)
#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
