#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoccerDemo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoccerDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoccerDemo__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_SoccerDemo__Fields_DEFINED
struct Animator;
struct SoccerDemo__Fields {
    struct MonoBehaviour__Fields _;
    struct Animator* animator;
    struct Vector3 defaultPosition;
    struct Quaternion defaultRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoccerDemo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoccerDemo__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#endif
#undef IL2CPP_STRUCT_SoccerDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoccerDemo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoccerDemo__Fields_FWDDECL)
#include <Modloader/app/structs/SoccerDemo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoccerDemo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
