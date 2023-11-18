#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLoggerBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLoggerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase_DEFINED)
#include <Modloader/app/structs/PlayFabLoggerBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabLoggerBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabLoggerBase_DEFINED
struct PlayFabLoggerBase__Class;
struct PlayFabLoggerBase {
    struct PlayFabLoggerBase__Class* klass;
    MonitorData* monitor;
    struct PlayFabLoggerBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLoggerBase_FWDDECL
#include <Modloader/app/structs/PlayFabLoggerBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabLoggerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLoggerBase_FWDDECL)
#include <Modloader/app/structs/PlayFabLoggerBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLoggerBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
