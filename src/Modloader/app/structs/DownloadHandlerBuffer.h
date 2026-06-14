#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadHandlerBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadHandlerBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandlerBuffer_DEFINED)
#include <Modloader/app/structs/DownloadHandlerBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadHandlerBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadHandlerBuffer_DEFINED
struct DownloadHandlerBuffer__Class;
struct DownloadHandlerBuffer {
    struct DownloadHandlerBuffer__Class* klass;
    MonitorData* monitor;
    struct DownloadHandlerBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadHandlerBuffer_FWDDECL)
#define IL2CPP_STRUCT_DownloadHandlerBuffer_FWDDECL
#include <Modloader/app/structs/DownloadHandlerBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadHandlerBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandlerBuffer_DEFINED) && !defined(IL2CPP_STRUCT_DownloadHandlerBuffer_FWDDECL)
#include <Modloader/app/structs/DownloadHandlerBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadHandlerBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
