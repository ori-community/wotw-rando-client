#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolTransformPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolTransformPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolTransformPosition_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_PoolTransformPosition_DEFINED
struct PoolTransformPosition {
    struct Vector3 Position;
    struct Quaternion Rotation;
    struct Vector3 StartScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoolTransformPosition_FWDDECL)
#define IL2CPP_STRUCT_PoolTransformPosition_FWDDECL
#endif
#undef IL2CPP_STRUCT_PoolTransformPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolTransformPosition_DEFINED) && !defined(IL2CPP_STRUCT_PoolTransformPosition_FWDDECL)
#include <Modloader/app/structs/PoolTransformPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolTransformPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
