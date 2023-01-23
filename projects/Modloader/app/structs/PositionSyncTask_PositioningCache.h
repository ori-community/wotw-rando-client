#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionSyncTask_PositioningCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionSyncTask_PositioningCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask_PositioningCache_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_PositionSyncTask_PositioningCache_DEFINED
struct PositionSyncTask_PositioningCache {
    struct Vector3 Position;
    struct Quaternion Rotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionSyncTask_PositioningCache_FWDDECL)
#define IL2CPP_STRUCT_PositionSyncTask_PositioningCache_FWDDECL
#endif
#undef IL2CPP_STRUCT_PositionSyncTask_PositioningCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask_PositioningCache_DEFINED) && !defined(IL2CPP_STRUCT_PositionSyncTask_PositioningCache_FWDDECL)
#include <Modloader/app/structs/PositionSyncTask_PositioningCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionSyncTask_PositioningCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
