#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityAvatar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityAvatar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityAvatar__Fields_DEFINED)
#include <Modloader/app/structs/EntityAvatar_MirrorMode__Enum.h>
#if defined(IL2CPP_STRUCT_EntityAvatar_MirrorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityAvatar__Fields_DEFINED
struct MoonAnimator;
struct Transform;
struct __declspec(align(8)) EntityAvatar__Fields {
    EntityAvatar_MirrorMode__Enum MirrorMethod;

    struct MoonAnimator* Animator;
    struct Transform* Mirror;
    float ModelLookDirection;
    bool Asymetrical;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityAvatar__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityAvatar__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EntityAvatar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityAvatar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityAvatar__Fields_FWDDECL)
#include <Modloader/app/structs/EntityAvatar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityAvatar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
