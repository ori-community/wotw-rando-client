#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrail_SimulationFrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrail_SimulationFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_SimulationFrameData_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonTrail_SimulationFrameData_DEFINED
struct MoonTrail_SimulationFrameData {
    struct Vector3 TargetALocalPosition;
    struct Vector3 TargetBLocalPosition;
    float DeltaTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrail_SimulationFrameData_FWDDECL)
#define IL2CPP_STRUCT_MoonTrail_SimulationFrameData_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTrail_SimulationFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_SimulationFrameData_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrail_SimulationFrameData_FWDDECL)
#include <Modloader/app/structs/MoonTrail_SimulationFrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrail_SimulationFrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
