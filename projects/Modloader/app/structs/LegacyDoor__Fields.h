#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDoor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDoor__Fields_DEFINED
struct String;
struct ActionMethod;
struct MessageProvider;
struct Condition_1;
struct ChangeStateSetupHolder;
struct SceneMetaData__Array;
struct LegacyDoor__Fields {
    struct MonoBehaviour__Fields _;
    struct String* OtherDoorName;
    bool CreateCheckpoint;
    float TransitionDelay;
    struct ActionMethod* EnterDoorAction;
    struct ActionMethod* ComeOutOfDoorAction;
    struct MessageProvider* OverrideEnterDoorMessage;
    struct Condition_1* Condition;
    struct ChangeStateSetupHolder* StateChange;
    struct SceneMetaData__Array* AdditionalScenesToBlockOn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDoor__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyDoor__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ChangeStateSetupHolder.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SceneMetaData__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDoor__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyDoor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDoor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
