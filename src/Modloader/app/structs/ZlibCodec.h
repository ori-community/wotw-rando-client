#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZlibCodec_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZlibCodec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibCodec_DEFINED)
#include <Modloader/app/structs/ZlibCodec__Fields.h>
#if defined(IL2CPP_STRUCT_ZlibCodec__Fields_DEFINED)
#define IL2CPP_STRUCT_ZlibCodec_DEFINED
struct ZlibCodec__Class;
struct ZlibCodec {
    struct ZlibCodec__Class* klass;
    MonitorData* monitor;
    struct ZlibCodec__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZlibCodec_FWDDECL)
#define IL2CPP_STRUCT_ZlibCodec_FWDDECL
#include <Modloader/app/structs/ZlibCodec__Class.h>
#endif
#undef IL2CPP_STRUCT_ZlibCodec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibCodec_DEFINED) && !defined(IL2CPP_STRUCT_ZlibCodec_FWDDECL)
#include <Modloader/app/structs/ZlibCodec.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZlibCodec.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
