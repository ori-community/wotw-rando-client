#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoThroughPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoThroughPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GoThroughPlatform__Fields_DEFINED
struct Collider__Array;
struct Transform__Array;
struct LightPlatform;
struct GoThroughPlatform__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider__Array* Colliders;
    struct Transform__Array* Transforms;
    struct LightPlatform* LightPlatform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoThroughPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoThroughPlatform__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/LightPlatform.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_GoThroughPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoThroughPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/GoThroughPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoThroughPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
