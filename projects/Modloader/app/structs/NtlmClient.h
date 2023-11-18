#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NtlmClient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NtlmClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmClient_DEFINED)
#define IL2CPP_STRUCT_NtlmClient_DEFINED
struct NtlmClient__Class;
struct NtlmClient {
    struct NtlmClient__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NtlmClient_FWDDECL)
#define IL2CPP_STRUCT_NtlmClient_FWDDECL
#include <Modloader/app/structs/NtlmClient__Class.h>
#endif
#undef IL2CPP_STRUCT_NtlmClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmClient_DEFINED) && !defined(IL2CPP_STRUCT_NtlmClient_FWDDECL)
#include <Modloader/app/structs/NtlmClient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NtlmClient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
