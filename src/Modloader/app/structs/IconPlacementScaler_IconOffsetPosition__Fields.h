#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) IconPlacementScaler_IconOffsetPosition__Fields {
    struct GameObject* iconObject;
    struct Vector3 RealPosition;
    struct Vector3 OriginalScale;
    bool IsTeleportable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IconPlacementScaler_IconOffsetPosition__Fields_FWDDECL)
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
