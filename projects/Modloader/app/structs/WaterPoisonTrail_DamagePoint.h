#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_DEFINED
struct WaterPoisonTrail_DamagePoint {
    struct Vector3 Position;
    float Size;
    float CurrentTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_FWDDECL)
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
