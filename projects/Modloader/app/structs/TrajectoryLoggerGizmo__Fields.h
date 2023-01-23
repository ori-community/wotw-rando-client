#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_DEFINED
struct List_1_UnityEngine_Vector2_;
struct TrajectoryLoggerGizmo__Fields {
    struct MonoBehaviour__Fields _;
    struct Color color;
    float JointSize;
    int32_t Capacity;
    struct List_1_UnityEngine_Vector2_* m_trajectory;
    int32_t m_pointN;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#endif
#undef IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrajectoryLoggerGizmo__Fields_FWDDECL)
#include <Modloader/app/structs/TrajectoryLoggerGizmo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrajectoryLoggerGizmo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
