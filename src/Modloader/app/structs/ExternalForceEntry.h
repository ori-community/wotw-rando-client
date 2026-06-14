#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalForceEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalForceEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalForceEntry_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ExternalForceEntry_DEFINED
struct AnimationCurve;
struct Object_1;
struct ExternalForceEntry {
    struct Vector2 Force;
    float Duration;
    float Dampening;
    float CurrentTime;
    struct AnimationCurve* DampeningOverTime;
    struct Object_1* Source;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalForceEntry_FWDDECL)
#define IL2CPP_STRUCT_ExternalForceEntry_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Object_1.h>
#endif
#undef IL2CPP_STRUCT_ExternalForceEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalForceEntry_DEFINED) && !defined(IL2CPP_STRUCT_ExternalForceEntry_FWDDECL)
#include <Modloader/app/structs/ExternalForceEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalForceEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
