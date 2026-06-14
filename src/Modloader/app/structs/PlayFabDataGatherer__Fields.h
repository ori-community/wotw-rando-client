#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabDataGatherer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabDataGatherer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer__Fields_DEFINED)
#include <Modloader/app/structs/DeviceType__Enum.h>
#include <Modloader/app/structs/GraphicsDeviceType__Enum.h>
#include <Modloader/app/structs/RuntimePlatform__Enum.h>
#if defined(IL2CPP_STRUCT_RuntimePlatform__Enum_DEFINED) && defined(IL2CPP_STRUCT_GraphicsDeviceType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DeviceType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabDataGatherer__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayFabDataGatherer__Fields {
    struct String* ProductName;
    struct String* ProductBundle;
    struct String* Version;
    struct String* Company;
    RuntimePlatform__Enum Platform;

    bool GraphicsMultiThreaded;
    GraphicsDeviceType__Enum GraphicsType;

    struct String* DataPath;
    struct String* PersistentDataPath;
    struct String* StreamingAssetsPath;
    int32_t TargetFrameRate;
    struct String* UnityVersion;
    bool RunInBackground;
    struct String* DeviceModel;
    DeviceType__Enum DeviceType;

    struct String* DeviceUniqueId;
    struct String* OperatingSystem;
    int32_t GraphicsDeviceId;
    struct String* GraphicsDeviceName;
    int32_t GraphicsMemorySize;
    int32_t GraphicsShaderLevel;
    int32_t SystemMemorySize;
    int32_t ProcessorCount;
    int32_t ProcessorFrequency;
    struct String* ProcessorType;
    bool SupportsAccelerometer;
    bool SupportsGyroscope;
    bool SupportsLocationService;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabDataGatherer__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabDataGatherer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabDataGatherer__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabDataGatherer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabDataGatherer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
