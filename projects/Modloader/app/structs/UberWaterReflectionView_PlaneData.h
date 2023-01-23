#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_DEFINED
struct UberWaterReflectionView_PlaneData {
    struct Vector3 pos;
    struct Vector3 normal;
    struct Vector4 plane;
    float strength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneData_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
