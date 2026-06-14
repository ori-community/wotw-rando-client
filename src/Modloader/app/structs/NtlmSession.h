#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NtlmSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NtlmSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmSession_DEFINED)
#include <Modloader/app/structs/NtlmSession__Fields.h>
#if defined(IL2CPP_STRUCT_NtlmSession__Fields_DEFINED)
#define IL2CPP_STRUCT_NtlmSession_DEFINED
struct NtlmSession__Class;
struct NtlmSession {
    struct NtlmSession__Class* klass;
    MonitorData* monitor;
    struct NtlmSession__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NtlmSession_FWDDECL)
#define IL2CPP_STRUCT_NtlmSession_FWDDECL
#include <Modloader/app/structs/NtlmSession__Class.h>
#endif
#undef IL2CPP_STRUCT_NtlmSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmSession_DEFINED) && !defined(IL2CPP_STRUCT_NtlmSession_FWDDECL)
#include <Modloader/app/structs/NtlmSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NtlmSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
