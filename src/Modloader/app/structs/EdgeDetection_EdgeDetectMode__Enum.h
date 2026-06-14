#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_DEFINED
enum class EdgeDetection_EdgeDetectMode__Enum : int32_t {
    TriangleDepthNormals = 0x00000000,
    RobertsCrossDepthNormals = 0x00000001,
    SobelDepth = 0x00000002,
    SobelDepthThin = 0x00000003,
    TriangleLuminance = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_FWDDECL)
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
