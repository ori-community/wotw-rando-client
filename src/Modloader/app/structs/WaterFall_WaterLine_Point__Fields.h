#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_DEFINED
struct ParticleSystem;
struct __declspec(align(8)) WaterFall_WaterLine_Point__Fields {
    bool IsSource;
    struct Vector3 Velocity;
    struct Vector3 Position;
    struct ParticleSystem* ParticleEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFall_WaterLine_Point__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
