#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StretchGameObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StretchGameObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StretchGameObject__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_StretchGameObject__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct StretchGameObject__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* StretchOverSpeedCurve;
    struct Vector3 LastPosition;
    float Stretch;
    struct Transform* Child;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StretchGameObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_StretchGameObject__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_StretchGameObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StretchGameObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StretchGameObject__Fields_FWDDECL)
#include <Modloader/app/structs/StretchGameObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StretchGameObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
