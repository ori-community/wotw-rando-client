#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZlibBaseStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZlibBaseStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibBaseStream_DEFINED)
#include <Modloader/app/structs/ZlibBaseStream__Fields.h>
#if defined(IL2CPP_STRUCT_ZlibBaseStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ZlibBaseStream_DEFINED
struct ZlibBaseStream__Class;
struct ZlibBaseStream {
    struct ZlibBaseStream__Class* klass;
    MonitorData* monitor;
    struct ZlibBaseStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZlibBaseStream_FWDDECL)
#define IL2CPP_STRUCT_ZlibBaseStream_FWDDECL
#include <Modloader/app/structs/ZlibBaseStream__Class.h>
#endif
#undef IL2CPP_STRUCT_ZlibBaseStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibBaseStream_DEFINED) && !defined(IL2CPP_STRUCT_ZlibBaseStream_FWDDECL)
#include <Modloader/app/structs/ZlibBaseStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZlibBaseStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
