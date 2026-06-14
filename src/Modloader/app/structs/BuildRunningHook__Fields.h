#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRunningHook__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRunningHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRunningHook__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildRunningHook__Fields_DEFINED
struct String;
struct BuildRunningHook__Fields {
    struct MonoBehaviour__Fields _;
    bool ShouldCheck;
    float m_timestamp;
    float m_interval;
    struct String* m_buildRunningHookFileName;
    struct String* m_buildRunningHookFilePath;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRunningHook__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuildRunningHook__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BuildRunningHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRunningHook__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuildRunningHook__Fields_FWDDECL)
#include <Modloader/app/structs/BuildRunningHook__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRunningHook__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
