#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelegatedStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelegatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegatedStream_DEFINED)
#include <Modloader/app/structs/DelegatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_DelegatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_DelegatedStream_DEFINED
struct DelegatedStream__Class;
struct DelegatedStream {
    struct DelegatedStream__Class* klass;
    MonitorData* monitor;
    struct DelegatedStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelegatedStream_FWDDECL)
#define IL2CPP_STRUCT_DelegatedStream_FWDDECL
#include <Modloader/app/structs/DelegatedStream__Class.h>
#endif
#undef IL2CPP_STRUCT_DelegatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegatedStream_DEFINED) && !defined(IL2CPP_STRUCT_DelegatedStream_FWDDECL)
#include <Modloader/app/structs/DelegatedStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelegatedStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
