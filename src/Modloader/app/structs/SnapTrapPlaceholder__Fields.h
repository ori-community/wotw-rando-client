#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/PrefabPlaceholder__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#if defined(IL2CPP_STRUCT_PrefabPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_DEFINED
struct SerializedBooleanUberState;
struct PhysicalSystemManager;
struct Rigidbody;
struct AttachJointSettings;
struct SnapTrapPlaceholder__Fields {
    struct PrefabPlaceholder__Fields _;
    struct SerializedBooleanUberState* ThawedUberState;
    struct SnapTrapEntity_SnapTrapParameters EntityParameters;
    bool CloseOnDetectionZone;
    struct Rect DetectionZoneBounds;
    bool CanBeFrozen;
    struct PhysicalSystemManager* PhysicalSystemManager;
    struct Rigidbody* AttachToBody;
    struct AttachJointSettings* JointSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
