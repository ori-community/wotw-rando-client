#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipDecoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder_DEFINED)
#include <Modloader/app/structs/GZipDecoder__Fields.h>
#if defined(IL2CPP_STRUCT_GZipDecoder__Fields_DEFINED)
#define IL2CPP_STRUCT_GZipDecoder_DEFINED
struct GZipDecoder__Class;
struct GZipDecoder {
    struct GZipDecoder__Class* klass;
    MonitorData* monitor;
    struct GZipDecoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GZipDecoder_FWDDECL)
#define IL2CPP_STRUCT_GZipDecoder_FWDDECL
#include <Modloader/app/structs/GZipDecoder__Class.h>
#endif
#undef IL2CPP_STRUCT_GZipDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder_DEFINED) && !defined(IL2CPP_STRUCT_GZipDecoder_FWDDECL)
#include <Modloader/app/structs/GZipDecoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipDecoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
