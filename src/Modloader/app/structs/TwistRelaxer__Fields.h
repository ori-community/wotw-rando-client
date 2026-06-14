#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwistRelaxer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwistRelaxer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistRelaxer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TwistRelaxer__Fields_DEFINED
struct Transform;
struct TwistRelaxer__Fields {
    struct MonoBehaviour__Fields _;
    float weight;
    float parentChildCrossfade;
    struct Transform* parent;
    struct Transform* child;
    struct Vector3 twistAxis;
    struct Vector3 axis;
    struct Vector3 axisRelativeToParentDefault;
    struct Vector3 axisRelativeToChildDefault;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TwistRelaxer__Fields_FWDDECL)
#define IL2CPP_STRUCT_TwistRelaxer__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TwistRelaxer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistRelaxer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TwistRelaxer__Fields_FWDDECL)
#include <Modloader/app/structs/TwistRelaxer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwistRelaxer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
