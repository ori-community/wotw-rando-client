#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrowHitData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrowHitData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrowHitData_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ArrowHitData_DEFINED
struct ArrowHitData {
    struct Vector3 CollisionNormal;
    struct Vector3 CollisionPoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrowHitData_FWDDECL)
#define IL2CPP_STRUCT_ArrowHitData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ArrowHitData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrowHitData_DEFINED) && !defined(IL2CPP_STRUCT_ArrowHitData_FWDDECL)
#include <Modloader/app/structs/ArrowHitData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrowHitData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
