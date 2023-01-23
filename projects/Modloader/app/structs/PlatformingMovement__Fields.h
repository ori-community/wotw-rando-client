#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformingMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingMovement__Fields_DEFINED)
#include <Modloader/app/structs/PlatformMovement__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PlatformingMovement__Fields_DEFINED
struct PlatformingMovement__Fields {
    struct PlatformMovement__Fields _;
    bool _IsSuspended_k__BackingField;
    bool ShouldDisableDetectCollisionsOnBash;
    struct Vector2 m_groundContactNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformingMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformingMovement__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlatformingMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformingMovement__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformingMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformingMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
