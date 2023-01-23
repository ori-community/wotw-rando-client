#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_DEFINED)
#include <Modloader/app/structs/GrabbableSurface__Fields.h>
#if defined(IL2CPP_STRUCT_GrabbableSurface__Fields_DEFINED)
#define IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_DEFINED
struct AutoRotate;
struct GrabbableSurfaceMovingWheel__Fields {
    struct GrabbableSurface__Fields _;
    bool m_isMoving;
    struct AutoRotate* m_autoRotate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_FWDDECL
#include <Modloader/app/structs/AutoRotate.h>
#endif
#undef IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableSurfaceMovingWheel__Fields_FWDDECL)
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
