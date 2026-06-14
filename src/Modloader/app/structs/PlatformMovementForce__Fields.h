#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformMovementForce__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformMovementForce__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementForce__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformMovementForce__Fields_DEFINED
struct SeinCharacter;
struct PlatformMovementForce__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* Sein;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformMovementForce__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformMovementForce__Fields_FWDDECL
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_PlatformMovementForce__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementForce__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformMovementForce__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformMovementForce__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformMovementForce__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
