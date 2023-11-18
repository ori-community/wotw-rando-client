#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLogger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogger_DEFINED)
#include <Modloader/app/structs/PlayFabLogger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabLogger__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabLogger_DEFINED
struct PlayFabLogger__Class;
struct PlayFabLogger {
    struct PlayFabLogger__Class* klass;
    MonitorData* monitor;
    struct PlayFabLogger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLogger_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLogger_FWDDECL
#include <Modloader/app/structs/PlayFabLogger__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogger_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLogger_FWDDECL)
#include <Modloader/app/structs/PlayFabLogger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLogger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
