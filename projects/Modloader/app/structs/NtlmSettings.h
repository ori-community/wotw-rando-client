#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NtlmSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NtlmSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmSettings_DEFINED)
#define IL2CPP_STRUCT_NtlmSettings_DEFINED
struct NtlmSettings__Class;
struct NtlmSettings {
    struct NtlmSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NtlmSettings_FWDDECL)
#define IL2CPP_STRUCT_NtlmSettings_FWDDECL
#include <Modloader/app/structs/NtlmSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_NtlmSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmSettings_DEFINED) && !defined(IL2CPP_STRUCT_NtlmSettings_FWDDECL)
#include <Modloader/app/structs/NtlmSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NtlmSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
