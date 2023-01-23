#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_DEFINED
struct WaterFallMask_WaterLineInterruption;
struct ParticleSystem__Array;
struct Vector2__Array;
struct __declspec(align(8)) WaterFallMask_WaterLineGroup__Fields {
    struct Vector2 SourceStart;
    struct Vector2 SourceEnd;
    struct Rect Rect;
    struct WaterFallMask_WaterLineInterruption* Interruption;
    struct ParticleSystem__Array* StaticCollisionParticleEffects;
    struct Vector2__Array* StaticCollisionPoints;
    struct Vector2 OriginalEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineInterruption.h>
#endif
#undef IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFallMask_WaterLineGroup__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
