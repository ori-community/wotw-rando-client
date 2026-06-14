#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTlsStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsStream_DEFINED)
#include <Modloader/app/structs/UnityTlsStream__Fields.h>
#if defined(IL2CPP_STRUCT_UnityTlsStream__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityTlsStream_DEFINED
struct UnityTlsStream__Class;
struct UnityTlsStream {
    struct UnityTlsStream__Class* klass;
    MonitorData* monitor;
    struct UnityTlsStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTlsStream_FWDDECL)
#define IL2CPP_STRUCT_UnityTlsStream_FWDDECL
#include <Modloader/app/structs/UnityTlsStream__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityTlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsStream_DEFINED) && !defined(IL2CPP_STRUCT_UnityTlsStream_FWDDECL)
#include <Modloader/app/structs/UnityTlsStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTlsStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
