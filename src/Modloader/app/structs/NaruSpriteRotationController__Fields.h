#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruSpriteRotationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSpriteRotationController__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_NaruSpriteRotationController__Fields_DEFINED
struct Naru;
struct Transform;
struct NaruSpriteRotationController__Fields {
    struct Suspendable__Fields _;
    float Angle;
    struct Naru* Naru;
    bool _IsSuspended_k__BackingField;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruSpriteRotationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NaruSpriteRotationController__Fields_FWDDECL
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NaruSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSpriteRotationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NaruSpriteRotationController__Fields_FWDDECL)
#include <Modloader/app/structs/NaruSpriteRotationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruSpriteRotationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
