#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream_DEFINED)
#include <Modloader/app/structs/DeflateStream__Fields.h>
#if defined(IL2CPP_STRUCT_DeflateStream__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateStream_DEFINED
struct DeflateStream__Class;
struct DeflateStream {
    struct DeflateStream__Class* klass;
    MonitorData* monitor;
    struct DeflateStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateStream_FWDDECL)
#define IL2CPP_STRUCT_DeflateStream_FWDDECL
#include <Modloader/app/structs/DeflateStream__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflateStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStream_FWDDECL)
#include <Modloader/app/structs/DeflateStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
