#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactFilter2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactFilter2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactFilter2D_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_ContactFilter2D_DEFINED
struct ContactFilter2D {
    bool useTriggers;
    bool useLayerMask;
    bool useDepth;
    bool useOutsideDepth;
    bool useNormalAngle;
    bool useOutsideNormalAngle;
    struct LayerMask layerMask;
    float minDepth;
    float maxDepth;
    float minNormalAngle;
    float maxNormalAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactFilter2D_FWDDECL)
#define IL2CPP_STRUCT_ContactFilter2D_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContactFilter2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactFilter2D_DEFINED) && !defined(IL2CPP_STRUCT_ContactFilter2D_FWDDECL)
#include <Modloader/app/structs/ContactFilter2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactFilter2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
