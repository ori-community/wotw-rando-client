#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossCameraTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossCameraTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraTarget__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_BossCameraTarget__Fields_DEFINED
struct Transform;
struct BossCameraTarget__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* FocalPoint;
    struct Vector3 FocalSize;
    struct Color EditorGizmoColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossCameraTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossCameraTarget__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BossCameraTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossCameraTarget__Fields_FWDDECL)
#include <Modloader/app/structs/BossCameraTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossCameraTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
