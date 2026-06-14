#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_CrashContext__StaticFields_DEFINED
struct CrashContext__StaticFields {
    bool s_isDoingCleanup;
    struct Guid s_telemetrySessionID;
    bool s_initialized;
    uint8_t* s_buffer;
    int32_t s_bufferSize;
    uint32_t s_counter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrashContext__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CrashContext__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CrashContext__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext__StaticFields_FWDDECL)
#include <Modloader/app/structs/CrashContext__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
