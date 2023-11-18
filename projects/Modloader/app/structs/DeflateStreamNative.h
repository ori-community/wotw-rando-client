#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStreamNative_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStreamNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamNative_DEFINED)
#include <Modloader/app/structs/DeflateStreamNative__Fields.h>
#if defined(IL2CPP_STRUCT_DeflateStreamNative__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateStreamNative_DEFINED
struct DeflateStreamNative__Class;
struct DeflateStreamNative {
    struct DeflateStreamNative__Class* klass;
    MonitorData* monitor;
    struct DeflateStreamNative__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateStreamNative_FWDDECL)
#define IL2CPP_STRUCT_DeflateStreamNative_FWDDECL
#include <Modloader/app/structs/DeflateStreamNative__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflateStreamNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamNative_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStreamNative_FWDDECL)
#include <Modloader/app/structs/DeflateStreamNative.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStreamNative.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
