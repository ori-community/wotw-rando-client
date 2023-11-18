#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_DEFINED
struct StressTester_SceneIdentifier;
struct String;
struct __declspec(align(8)) StressTester_StressTestPoint__Fields {
    struct StressTester_SceneIdentifier* SceneIdentifier;
    struct Vector2 Position;
    bool Skip;
    struct String* PauseMovementUntilSceneIsReached;
    bool SkipAfterLock;
    bool TakeScreenshot;
    bool SetUberState;
    int32_t UberStateIndex;
    float UberStateValue;
    float ForceSpeed;
    float ThrowAndWait;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_FWDDECL
#include <Modloader/app/structs/StressTester_SceneIdentifier.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_FWDDECL)
#include <Modloader/app/structs/StressTester_StressTestPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester_StressTestPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
