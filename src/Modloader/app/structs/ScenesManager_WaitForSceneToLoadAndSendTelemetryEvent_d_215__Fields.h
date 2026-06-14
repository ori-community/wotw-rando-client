#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_DEFINED
struct Object;
struct AsyncOperation_1;
struct ScenesManager;
struct RuntimeSceneMetaData;
struct __declspec(align(8)) ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct AsyncOperation_1* loadOperation;
    struct ScenesManager* __4__this;
    struct RuntimeSceneMetaData* sceneMetaData;
};
#endif
#if !defined(IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/ScenesManager.h>
#endif
#undef IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
