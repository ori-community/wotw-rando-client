#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#include <Modloader/app/structs/PrefabPlaceholder__Fields.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#if defined(IL2CPP_STRUCT_PrefabPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED) && defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_DEFINED)
#define IL2CPP_STRUCT_LianaPlaceholder__Fields_DEFINED
struct SerializedBooleanUberState;
struct LianaPlaceholder__Fields {
    struct PrefabPlaceholder__Fields _;
    struct SerializedBooleanUberState* ThawedUberState;
    struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
    struct LianaEntity_LianaParameters LianaEntityParameters;
    bool CanBeFrozen;
    float m_lastFrozenLeafRotation;
    bool m_hasInitialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LianaPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_LianaPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LianaPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/LianaPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
