#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDoorHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDoorHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoorHandler__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/SeinDoorHandler_State__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinDoorHandler_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinDoorHandler__Fields_DEFINED
struct SeinCharacter;
struct MessageProvider;
struct MoonAnimation;
struct MessageBox;
struct LegacyDoor;
struct RuntimeSceneMetaData__Array;
struct SeinDoorHandler__Fields {
    struct GuidOwner__Fields _;
    struct SeinCharacter* Sein;
    bool _IsOverlappingDoor_k__BackingField;
    struct MessageProvider* EnterDoorMessage;
    struct MoonAnimation* SeinEnterDoorAnimation;
    float UseDoorVerticalInputAmount;
    struct MessageBox* m_enterDoorHint;
    bool m_createCheckpoint;
    bool m_isOverlappingDoor;
    struct LegacyDoor* m_targetDoor;
    bool m_scenesLoaded;
    bool m_scenesEnabled;
    bool m_includedScenesLoaded;
    struct RuntimeSceneMetaData__Array* m_runtimeSceneMetaData;
    SeinDoorHandler_State__Enum m_state;

    struct LegacyDoor* m_door;
    bool m_justUsedDoor;
    float m_goingThroughDoorFaderTimeout;
    float m_stateTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDoorHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDoorHandler__Fields_FWDDECL
#include <Modloader/app/structs/LegacyDoor.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/RuntimeSceneMetaData__Array.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinDoorHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDoorHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDoorHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDoorHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDoorHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
