#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HammerTrail_TrailPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HammerTrail_TrailPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail_TrailPoint_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HammerTrail_TrailPoint_DEFINED
struct HammerTrail_TrailPoint {
    float TimeLeft;
    struct Vector3 Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HammerTrail_TrailPoint_FWDDECL)
#define IL2CPP_STRUCT_HammerTrail_TrailPoint_FWDDECL
#endif
#undef IL2CPP_STRUCT_HammerTrail_TrailPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail_TrailPoint_DEFINED) && !defined(IL2CPP_STRUCT_HammerTrail_TrailPoint_FWDDECL)
#include <Modloader/app/structs/HammerTrail_TrailPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HammerTrail_TrailPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
