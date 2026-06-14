#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TailStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TailStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailStream_DEFINED)
#include <Modloader/app/structs/TailStream__Fields.h>
#if defined(IL2CPP_STRUCT_TailStream__Fields_DEFINED)
#define IL2CPP_STRUCT_TailStream_DEFINED
struct TailStream__Class;
struct TailStream {
    struct TailStream__Class* klass;
    MonitorData* monitor;
    struct TailStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TailStream_FWDDECL)
#define IL2CPP_STRUCT_TailStream_FWDDECL
#include <Modloader/app/structs/TailStream__Class.h>
#endif
#undef IL2CPP_STRUCT_TailStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailStream_DEFINED) && !defined(IL2CPP_STRUCT_TailStream_FWDDECL)
#include <Modloader/app/structs/TailStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TailStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
