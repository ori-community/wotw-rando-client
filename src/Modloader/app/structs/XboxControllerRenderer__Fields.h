#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxControllerRenderer__Fields_DEFINED
struct Animator;
struct Transform;
struct XboxControllerRenderer_ButtonContainer__Array;
struct XboxControllerRenderer__Fields {
    struct MonoBehaviour__Fields _;
    struct Animator* animator;
    struct Transform* leftThumb;
    struct Transform* rightThumb;
    struct Transform* dpad;
    struct XboxControllerRenderer_ButtonContainer__Array* buttons;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerRenderer__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer__Array.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/XboxControllerRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
