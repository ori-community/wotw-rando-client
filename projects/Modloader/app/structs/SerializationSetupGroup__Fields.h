#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupGroup__Fields_DEFINED
struct List_1_SerializationSetupGroup_TargetSetupEntry_;
struct NewSetupStateController;
struct SerializationSetupGroup_StateChange;
struct MoonTimeline;
struct UberIDOwnerSO;
struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_;
struct SerializationSetupGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_SerializationSetupGroup_TargetSetupEntry_* Entries;
    struct NewSetupStateController* m_stateController;
    struct SerializationSetupGroup_StateChange* m_stateChange;
    struct MoonTimeline* m_transition;
    struct UberIDOwnerSO* m_uberState;
    struct Color m_setupColor;
    bool DebugMode;
    struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* m_gameObjectToEntry;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupGroup__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_.h>
#include <Modloader/app/structs/List_1_SerializationSetupGroup_TargetSetupEntry_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SerializationSetupGroup_StateChange.h>
#include <Modloader/app/structs/UberIDOwnerSO.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupGroup__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationSetupGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
