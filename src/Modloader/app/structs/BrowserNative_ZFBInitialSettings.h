#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_DEFINED
struct String;
struct BrowserNative_ZFBInitialSettings {
    struct String* cefPath;
    struct String* localePath;
    struct String* subprocessFile;
    struct String* userAgent;
    struct String* logFile;
    struct String* profilePath;
    int32_t debugPort;
    int32_t multiThreadedMessageLoop;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_ZFBInitialSettings_FWDDECL)
#include <Modloader/app/structs/BrowserNative_ZFBInitialSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_ZFBInitialSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
