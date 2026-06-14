#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileAuthenticatedStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_DEFINED)
#include <Modloader/app/structs/MobileAuthenticatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_DEFINED
struct MobileAuthenticatedStream__Class;
struct MobileAuthenticatedStream {
    struct MobileAuthenticatedStream__Class* klass;
    MonitorData* monitor;
    struct MobileAuthenticatedStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_FWDDECL)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_FWDDECL
#include <Modloader/app/structs/MobileAuthenticatedStream__Class.h>
#endif
#undef IL2CPP_STRUCT_MobileAuthenticatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_DEFINED) && !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_FWDDECL)
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
