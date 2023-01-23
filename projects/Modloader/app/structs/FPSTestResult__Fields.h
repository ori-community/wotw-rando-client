#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestResult__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_FPSTestResult__Fields_DEFINED
struct String;
struct List_1_FPSSampleData_;
struct __declspec(align(8)) FPSTestResult__Fields {
    struct String* SceneName;
    float SceneLoadTime;
    float SceneUnloadTime;
    struct DateTime DateTime;
    int32_t ActiveScenes;
    int32_t LoadedScenes;
    int32_t DisabledScenes;
    int32_t DisablingScenes;
    int32_t LoadingScenes;
    int32_t LoadingCancelledScenes;
    struct List_1_FPSSampleData_* SampleList;
    float ActivationTime;
    float DeactivationTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSTestResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSTestResult__Fields_FWDDECL
#include <Modloader/app/structs/List_1_FPSSampleData_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FPSTestResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestResult__Fields_FWDDECL)
#include <Modloader/app/structs/FPSTestResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
