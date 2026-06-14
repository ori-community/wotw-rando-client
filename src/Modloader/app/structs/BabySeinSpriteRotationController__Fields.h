#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_DEFINED
struct BabySein;
struct BabySeinSpriteRotationController__Fields {
    struct Suspendable__Fields _;
    float Angle;
    struct BabySein* BabySein;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_FWDDECL
#include <Modloader/app/structs/BabySein.h>
#endif
#undef IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabySeinSpriteRotationController__Fields_FWDDECL)
#include <Modloader/app/structs/BabySeinSpriteRotationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySeinSpriteRotationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
